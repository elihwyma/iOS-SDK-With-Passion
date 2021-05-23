/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIWorkoutSummaryRowOption : NSObject

{
    unsigned long long _rowType;
    CDUnknownBlockType _condition;
}

@property (nonatomic, readonly) unsigned long long rowType;
@property (nonatomic, readonly) CDUnknownBlockType condition;

- (id)initWithRowType:(unsigned long long)arg1 condition:(CDUnknownBlockType)arg2;
- (_Bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;

@end
