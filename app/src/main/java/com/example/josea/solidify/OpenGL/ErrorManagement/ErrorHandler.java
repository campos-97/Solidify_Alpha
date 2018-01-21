package com.example.josea.solidify.OpenGL.ErrorManagement;

/**
 * Created by josea on 15/1/2018.
 */

public interface ErrorHandler {
    enum  ErrorType {
        BUFFER_CREATION_ERROR
    }
    void handleError(ErrorType errorType, String cause);
}
