/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXScoredPrediction, NSString;

@interface ATXActionResult : NSObject

{
    struct ATXPredictionItem _predictionItem;
    _Bool _hasPredictionItem;
    struct ATXScoredPrediction *_scoredAction;
    NSString *_actionKey;
}

@property (nonatomic, readonly) ATXScoredPrediction *scoredAction;
@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic, readonly) const struct ATXPredictionItem *predictionItem;

- (id).cxx_construct;
- (void)setPredictionItem:(const struct ATXPredictionItem *)arg1;
- (id)initWithScoredAction:(struct ATXScoredPrediction *)arg1 predictionItem:(const struct ATXPredictionItem *)arg2 actionKey:(id)arg3;

@end
