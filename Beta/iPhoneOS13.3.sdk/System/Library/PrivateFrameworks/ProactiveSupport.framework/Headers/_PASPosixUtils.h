/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASPosixUtils : NSObject

+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 handleStdout:(CDUnknownBlockType)arg4 handleStderr:(CDUnknownBlockType)arg5;
+ (int)runCommandWithPath:(const char *)arg1 argv:(const char **)arg2 envp:(const char **)arg3 stdoutData:(id *)arg4 stderrData:(id *)arg5;

@end
