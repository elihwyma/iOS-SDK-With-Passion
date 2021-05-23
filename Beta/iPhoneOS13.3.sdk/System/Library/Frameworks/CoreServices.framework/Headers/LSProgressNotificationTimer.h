/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDate, NSMutableSet, NSTimer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSProgressNotificationTimer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
    NSDate *_lastFiredDate;
    NSMutableSet *_applications;
    double _minInterval;
    double _latency;
    SEL _appObserverSelector;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *lastFiredDate;
@property (retain, nonatomic) NSMutableSet *applications;
@property (nonatomic, readonly) double minInterval;
@property (nonatomic, readonly) double latency;
@property SEL appObserverSelector;

- (void)dealloc;
- (id)description;
- (void)clear;
- (id)initWithQueue:(id)arg1;
- (void)stopTimer;
- (void)addApplication:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)removeApplication:(id)arg1;
- (void)notifyObservers:(id)arg1 withApplications:(id)arg2;

@end
