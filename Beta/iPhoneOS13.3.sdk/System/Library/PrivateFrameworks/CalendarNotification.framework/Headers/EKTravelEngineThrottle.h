/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface EKTravelEngineThrottle : NSObject

{
    _Bool _running;
    NSString *_eventExternalURL;
    CDUnknownBlockType _requestHypothesisRefreshBlock;
    CDUnknownBlockType _cancelHypothesisRequestRefreshBlock;
    CDUnknownBlockType _emissionBlock;
    NSString *_throttleIdentifier;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    NSDate *_nextEmissionDate;
}

@property (nonatomic) _Bool running;
@property (retain, nonatomic) NSString *throttleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue;
@property (retain, nonatomic) NSDate *nextEmissionDate;
@property (retain) NSString *eventExternalURL;
@property (copy, nonatomic) CDUnknownBlockType requestHypothesisRefreshBlock;
@property (copy, nonatomic) CDUnknownBlockType cancelHypothesisRequestRefreshBlock;
@property (copy, nonatomic) CDUnknownBlockType emissionBlock;

+ (double)_requestHypothesisRefreshInterval;
+ (double)emissionThresholdTimeInterval;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)tearDown;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)_registerForNotificationObservation;
- (void)_unregisterForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (id)btaJobName;
- (void)_uninstallEmissionTimer;
- (void)_fireEmissionBlock;
- (void)_updateEmissionDate:(id)arg1;
- (void)_emissionTimerFired:(id)arg1;
- (void)_createEmissionTimerWithDate:(id)arg1;
- (void)updatePredictedDepartureDate:(id)arg1;

@end
