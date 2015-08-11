package com.qtcallsjava.server;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class JavaSocServer {

	public static void main(String[] args) {
		
		 int portNumber = Integer.parseInt("4444");
		 System.out.println("JavaSocServer listens on portNumber "+portNumber);
		 
	        try ( 
	            ServerSocket serverSocket = new ServerSocket(portNumber);
	            Socket clientSocket = serverSocket.accept();
	            PrintWriter out =
	                new PrintWriter(clientSocket.getOutputStream(), true);
	            BufferedReader in = new BufferedReader(
	                new InputStreamReader(clientSocket.getInputStream()));
	        ) {
	         
	            String inputLine;
	 
	            while ((inputLine = in.readLine()) != null) {
	            	 System.out.println("JavaSocServer echos "+inputLine);
	                out.println();
	         
	            }
	        } catch (IOException e) {
	            System.out.println("Exception caught when trying to listen on port "
	                + portNumber + " or listening for a connection");
	            System.out.println(e.getMessage());
	        }

	}

}
