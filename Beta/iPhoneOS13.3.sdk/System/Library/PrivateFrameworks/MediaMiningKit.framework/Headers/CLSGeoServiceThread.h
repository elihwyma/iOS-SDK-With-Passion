/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSThread.h>

@interface CLSGeoServiceThread : NSThread

{
    struct __CFRunLoop *_runLoop;
}

- (void)cancel;
- (void)main;

@end
