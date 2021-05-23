/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXActionFeedbackWeights : NSObject

{
    // Error: parsing type: '[8[32 ]]', name: _confirmWeights
    // Error: parsing type: '[8[32 ]]', name: _rejectWeights
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (float)confirmWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;
- (float)rejectWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;

@end
