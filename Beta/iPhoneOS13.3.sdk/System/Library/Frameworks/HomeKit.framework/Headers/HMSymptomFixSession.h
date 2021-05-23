/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFTimer, HMFUnfairLock, HMSymptom, NSError, NSString, NSUUID, SFDeviceRepairSession, UIViewController, _HMContext;

@protocol HMSymptomFixSessionDelegate;

@interface HMSymptomFixSession : NSObject

{
    HMFUnfairLock *_lock;
    _Bool _deviceRepairSessionFinished;
    _Bool _hasSymptomDisappeared;
    unsigned int _deviceRepairFlags;
    long long _state;
    id <HMSymptomFixSessionDelegate> _delegate;
    NSError *_error;
    SFDeviceRepairSession *_deviceRepairSession;
    HMFTimer *_symptomDisappearanceTimer;
    UIViewController *_presentingViewController;
    _HMContext *_context;
    NSString *_logIdentifier;
    HMSymptom *_symptom;
    NSUUID *_deviceIdentifier;
}

@property (nonatomic, readonly) _HMContext *context;
@property (copy, nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SFDeviceRepairSession *deviceRepairSession;
@property (nonatomic, getter=isDeviceRepairSessionFinished) _Bool deviceRepairSessionFinished;
@property (nonatomic) _Bool hasSymptomDisappeared;
@property (retain, nonatomic) HMFTimer *symptomDisappearanceTimer;
@property (nonatomic, readonly) HMSymptom *symptom;
@property (nonatomic, readonly) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned int deviceRepairFlags;
@property (weak, nonatomic) id <HMSymptomFixSessionDelegate> delegate;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (id)_createDeviceRepairSession;
+ (id)_createSymptomDisappearanceTimer;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_updateState;
- (void)timerDidFire:(id)arg1;
- (id)initWithSymptom:(id)arg1 deviceIdentifier:(id)arg2 context:(id)arg3;
- (void)noteSymptomDisappeared;
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)arg1 error:(id)arg2;
- (void)_startSymptomDisappearanceTimer;

@end
