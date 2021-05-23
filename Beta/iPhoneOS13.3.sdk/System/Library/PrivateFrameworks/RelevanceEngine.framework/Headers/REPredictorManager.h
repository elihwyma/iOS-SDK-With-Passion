/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, REObserverStore, RERelevanceEngine;

@interface REPredictorManager : NSObject <Swift>

{
    NSArray *_predictors;
    NSDictionary *_predictorsMap;
    REObserverStore *_observer;
    RERelevanceEngine *_engine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePredictors:(CDUnknownBlockType)arg1;

@end
