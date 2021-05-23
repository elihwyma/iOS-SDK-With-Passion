/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PeriodicMaintenanceActivity : NSObject

{
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (id)sharedInstance;
+ (void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(CDUnknownBlockType)arg3;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

- (id)init;
- (void)dealloc;
- (void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(CDUnknownBlockType)arg3;
- (void)_registerPeriodicMaintenanceActivity;
- (void)_handleActivityRun:(id)arg1;

@end
