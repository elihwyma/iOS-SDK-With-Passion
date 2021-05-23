/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIRunLoopDelay : NSObject

{
    NSString *_mode;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
    double _timeout;
}

- (void)dealloc;
- (id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2;
- (void)delayRunLoop;
- (void)endDelay;

@end
