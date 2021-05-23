/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXSlotSet;

@interface ATXGuardedActionPredictionContainerData : NSObject

{
    struct ATXScoredPrediction *_scoredAction;
    ATXSlotSet *_slotSet;
    float _score;
}

- (id)initWithScoredAction:(struct ATXScoredPrediction *)arg1 slotSet:(id)arg2 score:(float)arg3;

@end
