/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXMinimalSlotResolutionParameters, NSString, _PASLock;

@interface ATXActionPredictionContainer : NSObject

{
    _PASLock *_lock;
    struct ATXPredictionItem _predictionItem;
    ATXMinimalSlotResolutionParameters *_parameters;
    NSString *_actionKey;
}

@property (nonatomic) struct ATXPredictionItem predictionItem;
@property (nonatomic, readonly) NSString *actionKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (float)score;
- (id).cxx_construct;
- (void)setScore:(float)arg1;
- (id)initWithScoredAction:(struct ATXScoredPrediction *)arg1 slotSet:(id)arg2 minimalSlotResolutionParameters:(id)arg3 score:(float)arg4 actionKey:(id)arg5 predictionItem:(struct ATXPredictionItem)arg6;
- (id)initWithScoredAction:(struct ATXScoredPrediction *)arg1 slotSet:(id)arg2 actionKey:(id)arg3;
- (id)initWithMinimalSlotResolutionParameters:(id)arg1 score:(float)arg2 actionKey:(id)arg3;
- (void)initializeScoredActionAndSlotSet;
- (struct ATXScoredPrediction *)scoredAction;
- (id)slotSet;
- (_Bool)isEqualToActionPredictionContainer:(id)arg1;

@end
