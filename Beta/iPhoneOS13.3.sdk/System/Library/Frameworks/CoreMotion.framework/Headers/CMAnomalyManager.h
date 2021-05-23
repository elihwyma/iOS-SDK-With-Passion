/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMAnomalyEvent;

@protocol CMAnomalyDelegate, OS_dispatch_queue;

@interface CMAnomalyManager : NSObject

{
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient *fLocationdConnection;
    CMAnomalyEvent *fLastReceivedEvent;
    CMAnomalyEvent *fLastDispatchedEvent;
    _Bool fRegisteredForNotification;
    id <CMAnomalyDelegate> _delegate;
}

@property (nonatomic) id <CMAnomalyDelegate> delegate;

+ (_Bool)isAnomalyDetectionAvailable;

- (id)init;
- (void)dealloc;
- (void)_registerForAnomalyDetection:(_Bool)arg1;
- (void)_sendRegistrationForAnomalyEvent:(id)arg1;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;
- (void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2;
- (void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2;

@end
