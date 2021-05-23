/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet;

@interface ATXDisplayCacheIntermediateFormat : NSObject

{
    NSArray *_actions;
    NSArray *_predictionChunks;
    NSIndexSet *_lockscreenPredictionIndices;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *predictionChunks;
@property (nonatomic, readonly) NSIndexSet *lockscreenPredictionIndices;

+ (id)fromActions:(id)arg1;

@end
