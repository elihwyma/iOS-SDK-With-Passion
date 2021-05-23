/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDictionary, REMLPrediction;

@interface REMLPredictionSet : NSObject

{
    NSDictionary *_predictionsByKey;
    REMLPrediction *_prediction;
}

@property (nonatomic, readonly) REMLPrediction *prediction;

- (id)predictionForKey:(id)arg1;
- (id)initWithPrediction:(id)arg1 predictionMap:(id)arg2;
- (id)initWithPrediction:(id)arg1;

@end
