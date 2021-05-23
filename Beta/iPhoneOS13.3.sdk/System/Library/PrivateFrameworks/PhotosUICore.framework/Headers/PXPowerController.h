/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PXPowerController : NSObject

{
    _Atomic unsigned int _assertionIdentifierGenerator;
    _Bool _backgrounded;
    unsigned int _assertionID;
    NSMutableDictionary *_assertionReasonsByIdentifier;
    NSObject<OS_dispatch_queue> *_powerControllerQueue;
    unsigned long long _backgroundTaskIdentifier;
    double _powerAssertionStartTime;
}

@property (nonatomic, readonly) NSMutableDictionary *assertionReasonsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *powerControllerQueue;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, getter=isBackgrounded) _Bool backgrounded;
@property (nonatomic, readonly) _Bool hasPowerAssertion;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)releasePowerAssertion;
- (unsigned int)generateAssertionIdentifier;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)takePowerAssertionIfNeeded;
- (void)releasePowerAssertionIfNeeded;
- (void)takePowerAssertion;
- (void)endBackgroundTaskIfNeeded;
- (void)startBackgroundTaskIfNeeded;

@end
