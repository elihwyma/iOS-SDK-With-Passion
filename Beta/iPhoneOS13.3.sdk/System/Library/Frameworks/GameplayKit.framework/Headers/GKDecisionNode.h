/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class GKDecisionTree;

@interface GKDecisionNode : NSObject

{
    struct GKCDecisionNode *_node;
    GKDecisionTree *_tree;
}

- (void)dealloc;
- (id)description;
- (id)attribute;
- (id)branches;
- (void)setAttribute:(id)arg1;
- (id)initWithNode:(struct GKCDecisionNode *)arg1 tree:(id)arg2;
- (id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3;
- (id)createBranchWithValue:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2;
- (id)getNodeAtBranch:(id)arg1;

@end
