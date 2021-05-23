/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIEventEnvironment, UIEventFetcher;

__attribute__((visibility("hidden")))
@interface UIEventDispatcher : NSObject

{
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    struct __CFRunLoopSource *_handleEventQueueRunLoopSource;
    struct __CFRunLoopSource *_collectHIDEventsRunLoopSource;
    struct __CFRunLoop *_runLoop;
}

@property (retain, nonatomic) UIEventEnvironment *mainEnvironment;

- (void)dealloc;
- (id)initWithApplication:(id)arg1;
- (void)_installEventRunLoopSources:(struct __CFRunLoop *)arg1;
- (void)eventFetcherDidReceiveEvents:(id)arg1;
- (void)signalNextDelivery;

@end
