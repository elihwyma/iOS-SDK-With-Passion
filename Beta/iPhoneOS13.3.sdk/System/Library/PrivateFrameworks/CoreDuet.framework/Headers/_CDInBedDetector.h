/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol _DKKnowledgeQuerying;

@interface _CDInBedDetector : NSObject

{
    id <_DKKnowledgeQuerying> _knowledge;
    unsigned long long _method;
}

@property (retain) id <_DKKnowledgeQuerying> knowledge;
@property unsigned long long method;

+ (id)inBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)arg1;
+ (id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
+ (id)simpleLockBasedInBedDetector;

- (id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
- (struct NSArray *)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (struct NSArray *)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id *)arg5;
- (id)findLatestEndOfWalkingActivityBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (struct NSArray *)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id *)arg3;

@end
