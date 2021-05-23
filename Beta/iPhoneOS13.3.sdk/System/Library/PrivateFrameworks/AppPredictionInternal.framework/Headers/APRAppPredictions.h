/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXResponse, NSArray, NSError;

@interface APRAppPredictions : NSObject

{
    ATXResponse *_atxResponse;
    NSArray *_scoredBundleIds;
    unsigned long long _experience;
    NSError *_error;
}

@property (nonatomic, readonly) ATXResponse *atxResponse;
@property (nonatomic, readonly) NSArray *scoredBundleIds;
@property (nonatomic) unsigned long long experience;
@property (nonatomic, readonly) NSError *error;

+ (unsigned long long)_experienceForPredictions:(id)arg1 intentType:(id)arg2;

- (id)init;
- (id)initWithScoredBundleIds:(id)arg1 experience:(unsigned long long)arg2 error:(id)arg3;
- (id)initWithIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3;

@end
