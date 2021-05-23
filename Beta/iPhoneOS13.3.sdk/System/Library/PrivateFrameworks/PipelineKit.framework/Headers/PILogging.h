/*
 Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface PILogging : NSObject

{
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;

@end
