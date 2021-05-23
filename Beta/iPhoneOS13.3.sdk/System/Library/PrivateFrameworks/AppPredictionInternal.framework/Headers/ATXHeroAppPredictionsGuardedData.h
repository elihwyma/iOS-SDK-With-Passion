/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface ATXHeroAppPredictionsGuardedData : NSObject

{
    NSArray *_predictedBundleIds;
    NSDate *_expirationDate;
    NSDate *_now;
}

- (void)invalidate;
- (_Bool)isPastExpirationDate;

@end
