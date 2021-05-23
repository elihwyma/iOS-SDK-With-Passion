/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface TAFilterVisitsSettings : NSObject

{
    double _maxSuspiciousDuration;
    double _minInterVisitDistance;
    unsigned long long _minNSigmaBetweenVisits;
    double _entryDisplayOnBudget;
    double _exitDisplayOnBudget;
    NSSet *_enabledLoiTypes;
}

@property (nonatomic, readonly) double maxSuspiciousDuration;
@property (nonatomic, readonly) double minInterVisitDistance;
@property (nonatomic, readonly) unsigned long long minNSigmaBetweenVisits;
@property (nonatomic, readonly) double entryDisplayOnBudget;
@property (nonatomic, readonly) double exitDisplayOnBudget;
@property (nonatomic, readonly) NSSet *enabledLoiTypes;

+ (id)defaultVisitsEnabledLoiTypes;

- (id)initWithDefaults;
- (id)enabledLoiTypesToString;
- (id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 enabledLoiTypes:(id)arg6;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 enabledLoiTypesOrDefault:(id)arg6;

@end
