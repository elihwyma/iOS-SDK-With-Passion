/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker, PETScalarEventTracker;

@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    PETScalarEventTracker *_frameworkErrors;
    PETDistributionEventTracker *_contactsMatches;
    PETDistributionEventTracker *_foundInAppsMatches;
    PETDistributionEventTracker *_eventsMatches;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) PETScalarEventTracker *frameworkErrors;
@property (retain, nonatomic) PETDistributionEventTracker *contactsMatches;
@property (retain, nonatomic) PETDistributionEventTracker *foundInAppsMatches;
@property (retain, nonatomic) PETDistributionEventTracker *eventsMatches;

+ (id)instance;
+ (id)trackerForDistribution:(id)arg1 withProperties:(id)arg2;
+ (id)counter:(id)arg1 withProperties:(id)arg2;
+ (id)trackerForGoal:(id)arg1 withProperties:(id)arg2;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;
+ (void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2;
+ (void)eventsMatches:(unsigned long long)arg1;

- (id)init;

@end
