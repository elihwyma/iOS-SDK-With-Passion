/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDispatchTimer, NSMutableArray;

@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentEvents;
    AXDispatchTimer *_flushEventsTimer;
}

@property (retain, nonatomic) NSMutableArray *recentEvents;
@property (retain, nonatomic) AXDispatchTimer *flushEventsTimer;

+ (void)flushEvents;
+ (void)setFlushEventsTimerDelay:(double)arg1;

- (id)init;
- (void)addEvent:(id)arg1;
- (void)_flushEventsIfNecessary;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)isRedirectedEvent:(id)arg1;

@end
