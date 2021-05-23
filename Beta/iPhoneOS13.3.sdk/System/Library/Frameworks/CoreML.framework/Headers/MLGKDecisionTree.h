/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject

{
    struct TreeEnsembleClassifier *_trc;
    MLTreeEnsembleClassifier *_treeClassifier;
    NSMutableArray *__attributes;
    NSMutableOrderedSet *__objectStore;
}

@property (retain, nonatomic) NSMutableArray *_attributes;
@property (retain, nonatomic) NSMutableOrderedSet *_objectStore;

- (void)dealloc;
- (id)_init;
- (id)_initWithFlattenedTree:(id)arg1;
- (_Bool)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2;
- (void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2;
- (id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2;

@end
