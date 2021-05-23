/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface CLSLogging : NSObject

{
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;

@end
