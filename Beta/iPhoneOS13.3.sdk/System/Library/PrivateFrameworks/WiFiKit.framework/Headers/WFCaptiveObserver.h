/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFCaptiveObserver : NSObject

{
    _Bool _observing;
    int _startCaptiveNotificationToken;
    int _endCaptiveNotificationToken;
    CDUnknownBlockType _eventHandler;
    NSObject<OS_dispatch_queue> *_captiveNotificationQueue;
}

@property (nonatomic, getter=isObserving) _Bool observing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *captiveNotificationQueue;
@property (nonatomic) int startCaptiveNotificationToken;
@property (nonatomic) int endCaptiveNotificationToken;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;

- (id)init;
- (void)dealloc;
- (void)stopObservingEvents;
- (void)startObservingEvents;

@end
