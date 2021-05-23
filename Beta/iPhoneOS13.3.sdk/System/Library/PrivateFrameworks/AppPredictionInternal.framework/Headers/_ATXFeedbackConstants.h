/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXFeedbackConstants : NSObject

+ (double)baseAlpha;
+ (double)baseBeta;
+ (double)multiplierForAppAlphasAndBetas;
+ (double)decayHalfLifeSeconds;
+ (double)aprDecayHalfLifeSeconds;
+ (double)actionDecayHalfLifeSeconds;
+ (double)alphaForBundleId:(id)arg1;
+ (double)betaForBundleId:(id)arg1;

- (id)init;

@end
