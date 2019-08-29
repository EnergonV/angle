// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL43_autogen.h:
//   Validation functions for the OpenGL 4.3 entry points.

#ifndef LIBANGLE_VALIDATION_GL43_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL43_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateClearBufferData(Context *context,
                             GLenum target,
                             GLenum internalformat,
                             GLenum format,
                             GLenum type,
                             const void *data);
bool ValidateClearBufferSubData(Context *context,
                                GLenum target,
                                GLenum internalformat,
                                GLintptr offset,
                                GLsizeiptr size,
                                GLenum format,
                                GLenum type,
                                const void *data);
bool ValidateCopyImageSubData(Context *context,
                              GLuint srcName,
                              GLenum srcTarget,
                              GLint srcLevel,
                              GLint srcX,
                              GLint srcY,
                              GLint srcZ,
                              GLuint dstName,
                              GLenum dstTarget,
                              GLint dstLevel,
                              GLint dstX,
                              GLint dstY,
                              GLint dstZ,
                              GLsizei srcWidth,
                              GLsizei srcHeight,
                              GLsizei srcDepth);
bool ValidateDebugMessageCallback(Context *context, GLDEBUGPROC callback, const void *userParam);
bool ValidateDebugMessageControl(Context *context,
                                 GLenum source,
                                 GLenum type,
                                 GLenum severity,
                                 GLsizei count,
                                 const GLuint *ids,
                                 GLboolean enabled);
bool ValidateDebugMessageInsert(Context *context,
                                GLenum source,
                                GLenum type,
                                GLuint id,
                                GLenum severity,
                                GLsizei length,
                                const GLchar *buf);
bool ValidateGetDebugMessageLog(Context *context,
                                GLuint count,
                                GLsizei bufSize,
                                GLenum *sources,
                                GLenum *types,
                                GLuint *ids,
                                GLenum *severities,
                                GLsizei *lengths,
                                GLchar *messageLog);
bool ValidateGetInternalformati64v(Context *context,
                                   GLenum target,
                                   GLenum internalformat,
                                   GLenum pname,
                                   GLsizei bufSize,
                                   GLint64 *params);
bool ValidateGetObjectLabel(Context *context,
                            GLenum identifier,
                            GLuint name,
                            GLsizei bufSize,
                            GLsizei *length,
                            GLchar *label);
bool ValidateGetObjectPtrLabel(Context *context,
                               const void *ptr,
                               GLsizei bufSize,
                               GLsizei *length,
                               GLchar *label);
bool ValidateGetProgramResourceLocationIndex(Context *context,
                                             GLuint program,
                                             GLenum programInterface,
                                             const GLchar *name);
bool ValidateInvalidateBufferData(Context *context, BufferID bufferPacked);
bool ValidateInvalidateBufferSubData(Context *context,
                                     BufferID bufferPacked,
                                     GLintptr offset,
                                     GLsizeiptr length);
bool ValidateInvalidateTexImage(Context *context, TextureID texturePacked, GLint level);
bool ValidateInvalidateTexSubImage(Context *context,
                                   TextureID texturePacked,
                                   GLint level,
                                   GLint xoffset,
                                   GLint yoffset,
                                   GLint zoffset,
                                   GLsizei width,
                                   GLsizei height,
                                   GLsizei depth);
bool ValidateMultiDrawArraysIndirect(Context *context,
                                     GLenum mode,
                                     const void *indirect,
                                     GLsizei drawcount,
                                     GLsizei stride);
bool ValidateMultiDrawElementsIndirect(Context *context,
                                       GLenum mode,
                                       GLenum type,
                                       const void *indirect,
                                       GLsizei drawcount,
                                       GLsizei stride);
bool ValidateObjectLabel(Context *context,
                         GLenum identifier,
                         GLuint name,
                         GLsizei length,
                         const GLchar *label);
bool ValidateObjectPtrLabel(Context *context, const void *ptr, GLsizei length, const GLchar *label);
bool ValidatePopDebugGroup(Context *context);
bool ValidatePushDebugGroup(Context *context,
                            GLenum source,
                            GLuint id,
                            GLsizei length,
                            const GLchar *message);
bool ValidateShaderStorageBlockBinding(Context *context,
                                       GLuint program,
                                       GLuint storageBlockIndex,
                                       GLuint storageBlockBinding);
bool ValidateTexBufferRange(Context *context,
                            GLenum target,
                            GLenum internalformat,
                            BufferID bufferPacked,
                            GLintptr offset,
                            GLsizeiptr size);
bool ValidateTexStorage3DMultisample(Context *context,
                                     TextureType targetPacked,
                                     GLsizei samples,
                                     GLenum internalformat,
                                     GLsizei width,
                                     GLsizei height,
                                     GLsizei depth,
                                     GLboolean fixedsamplelocations);
bool ValidateTextureView(Context *context,
                         TextureID texturePacked,
                         GLenum target,
                         GLuint origtexture,
                         GLenum internalformat,
                         GLuint minlevel,
                         GLuint numlevels,
                         GLuint minlayer,
                         GLuint numlayers);
bool ValidateVertexAttribLFormat(Context *context,
                                 GLuint attribindex,
                                 GLint size,
                                 GLenum type,
                                 GLuint relativeoffset);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL43_AUTOGEN_H_