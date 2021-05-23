/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REUpNextMLModelManager : NSObject

+ (void)removeStoredModel;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)performTrainingWithFeatureMaps:(id)arg1 events:(id)arg2;
- (id)comparatorWithRules:(id)arg1;
- (float)predicitedProbabilityForLogicalElement:(id)arg1;

@end
