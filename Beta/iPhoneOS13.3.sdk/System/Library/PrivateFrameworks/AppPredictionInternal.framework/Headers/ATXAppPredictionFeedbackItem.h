/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATXAppPredictionFeedbackItem : NSObject

{
    float _scoreInputs[437];
    float _totalScore;
    NSString *_bundleId;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) float totalScore;
@property (nonatomic, readonly) const float *scoreInputs;

+ (id)feedbackItemsForResponse:(id)arg1;
+ (id)feedbackItemsForChunks:(id)arg1;
+ (id)feedbackItemsForFeedbackChunk:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithBundleId:(id)arg1 totalScore:(float)arg2 scoreInputs:(const float *)arg3;

@end
