/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _ATXDuetHelper, _PASLock;

@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject

{
    id <ATXLocationManagerProtocol> _locationManager;
    _ATXDuetHelper *_duetHelper;
    _PASLock *_lock;
}

+ (id)defaultPath;
+ (void)writeModel:(id)arg1;
+ (void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)visitsWithLOI:(id)arg1 startDate:(id)arg2;
+ (id)sortTimeIntervals:(id)arg1;

- (id)init;
- (id)locationManager;
- (unsigned long long)loadModel;
- (void)train;
- (id)initWithDuetHelper:(id)arg1 locationManager:(id)arg2;
- (void)resetAppIntentLocationData;
- (double)launchProbabilityAtCurrentLOIForBundle:(id)arg1;
- (int)launchCountAtCurrentLOIOfBundle:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForAppIntent:(id)arg1;
- (int)launchCountAtCurrentLOIOfAppIntent:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForIntent:(id)arg1;
- (int)launchCountAtCurrentLOIOfIntent:(id)arg1;
- (double)launchProbabilityAtCurrentLOIForAppForAllIntents:(id)arg1;
- (int)launchCountAtCurrentLOIOfAppForAllIntents:(id)arg1;
- (int)totalLaunchCountAtCurrentLOI;
- (int)totalIntentLaunchCountAtCurrentLOI;
- (void)trainWithCallback:(CDUnknownBlockType)arg1;
- (void)_trainModelWithLOI:(id)arg1 startDate:(id)arg2;
- (unsigned long long)loadModelAtPath:(id)arg1;

@end
