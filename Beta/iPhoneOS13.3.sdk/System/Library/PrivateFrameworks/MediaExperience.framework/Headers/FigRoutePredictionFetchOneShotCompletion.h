/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface FigRoutePredictionFetchOneShotCompletion : NSObject

{
    CDUnknownBlockType _completionHandler;
}

- (id)init;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invokeWithRoutePredictions:(id)arg1 predictionContext:(id)arg2;

@end
