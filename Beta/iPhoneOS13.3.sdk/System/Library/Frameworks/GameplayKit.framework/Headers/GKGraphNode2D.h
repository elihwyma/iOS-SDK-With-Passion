/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKGraphNode.h>

@class MISSING_TYPE;

@interface GKGraphNode2D : GKGraphNode

{
    struct GKCGraphNode2D *_cGraphNode2D;
}

@property (nonatomic) MISSING_TYPE *position;

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithPoint: /* Error: Ran out of types for this method. */;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct GKCGraphNode2D *)cGraphNode2D;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)initWithPoint: /* Error: Ran out of types for this method. */;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;

@end
