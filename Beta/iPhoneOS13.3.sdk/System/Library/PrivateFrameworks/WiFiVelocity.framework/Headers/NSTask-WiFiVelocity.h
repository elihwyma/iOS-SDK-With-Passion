/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSTask.h>

@interface NSTask (WiFiVelocity)

+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputData:(id)arg4 errorData:(id)arg5 launchHandler:(CDUnknownBlockType)arg6 reply:(CDUnknownBlockType)arg7;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 startBlock:(CDUnknownBlockType)arg4 updateBlock:(CDUnknownBlockType)arg5 endBlock:(CDUnknownBlockType)arg6;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFilePath:(id)arg4 errorFilePath:(id)arg5 redirectErrorToOutput:(_Bool)arg6 launchHandler:(CDUnknownBlockType)arg7 reply:(CDUnknownBlockType)arg8;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFileHandle:(id)arg4 errorFileHandle:(id)arg5 launchHandler:(CDUnknownBlockType)arg6 reply:(CDUnknownBlockType)arg7;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputData:(id)arg4 errorData:(id)arg5 launchHandler:(CDUnknownBlockType)arg6 didLaunch:(_Bool *)arg7 error:(id *)arg8;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFilePath:(id)arg4 errorFilePath:(id)arg5 redirectErrorToOutput:(_Bool)arg6 launchHandler:(CDUnknownBlockType)arg7 didLaunch:(_Bool *)arg8 error:(id *)arg9;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 outputFileHandle:(id)arg4 errorFileHandle:(id)arg5 launchHandler:(CDUnknownBlockType)arg6 didLaunch:(_Bool *)arg7 error:(id *)arg8;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 launchHandler:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (void)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 reply:(CDUnknownBlockType)arg5;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 launchHandler:(CDUnknownBlockType)arg3 didLaunch:(_Bool *)arg4 error:(id *)arg5;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 error:(id *)arg4;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputData:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 didLaunch:(_Bool *)arg5 error:(id *)arg6;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 error:(id *)arg4;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFilePath:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 didLaunch:(_Bool *)arg5 error:(id *)arg6;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 error:(id *)arg4;
+ (_Bool)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 outputFileHandle:(id)arg3 launchHandler:(CDUnknownBlockType)arg4 didLaunch:(_Bool *)arg5 error:(id *)arg6;

@end
