/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKGraphNode.h>

@class MISSING_TYPE;

@interface GKGridGraphNode : GKGraphNode

{
    struct GKCGridGraphNode *_cGridGraphNode;
}

@property (nonatomic, readonly) MISSING_TYPE *gridPosition;

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (struct GKCGridGraphNode *)cGridGraphNode;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;

@end
