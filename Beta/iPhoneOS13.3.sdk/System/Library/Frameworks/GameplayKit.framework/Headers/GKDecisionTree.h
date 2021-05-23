/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class GKDecisionNode, GKRandomSource, MLGKDecisionTree;

@interface GKDecisionTree : NSObject

{
    struct GKCDecisionTree *_decisionTree;
    _Bool _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
    GKDecisionNode *_rootNode;
    GKRandomSource *_randomSource;
}

@property (retain, nonatomic) GKDecisionNode *rootNode;
@property (copy, nonatomic) GKRandomSource *randomSource;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id)arg2;
- (id)findActionForAnswers:(id)arg1;
- (id)initWithAttribute:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (_Bool)exportToURL:(id)arg1 error:(id)arg2;
- (id)getFlattenedTree;
- (id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;

@end
