/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICUserNotificationContext : NSObject

{
    CDUnknownBlockType _completionHandler;
    struct __CFRunLoopSource *_runLoopSourceRef;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) struct __CFRunLoopSource *runLoopSourceRef;

- (void)clearRunLoop;

@end
