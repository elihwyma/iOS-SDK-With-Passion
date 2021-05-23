/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IOKitHandler : NSObject

{
    unsigned long long _ioHdl;
    unsigned int _pwrConnect;
    unsigned int _pwrNotifier;
    struct IONotificationPort *_pwrPort;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _mostRecentAPWakeMachTime;
    unsigned long long _mostRecentAPSleepMachTime;
}

@property (nonatomic, readonly) unsigned long long mostRecentAPSleepMachTime;
@property (nonatomic, readonly) unsigned long long mostRecentAPWakeMachTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (id)init;
- (void)dealloc;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)enableIOKitPowerNotifications;
- (void)enableIOKitAssertionNotifications;
- (void)disableIOKitAssertionNotifications;
- (void)disableIOKitPowerNotifications;
- (void)reportIOPMAssertionException:(int)arg1 pid:(int)arg2;
- (void)updateMostRecentAPSleepTime;
- (void)updateMostRecentAPWakeTime;

@end
