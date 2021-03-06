/*
    Author: Lucas Parzych

    OpenGL buffer object helper functions. 

    DR. Michael Reale wrote createBuffer (I think) 
*/

void attributeBind(GLuint buffer, int index, int points)
{
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glVertexAttribPointer(
        index,              // index of attribute array 
        points,             // how many dimensions? 
        GL_FLOAT,           // type
        GL_FALSE,           // normalized?
        0,                  // stride
        (void*)0            // array buffer offset
    );
}


GLuint createBuffer(GLenum target, const void *buffer_data, GLsizei buffer_size, GLenum usageHint) 
{
    GLuint buffer;
    glGenBuffers(1, &buffer); 
    glBindBuffer(target, buffer);
    glBufferData(target, buffer_size, buffer_data, usageHint);
    return buffer;
}

