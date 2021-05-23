/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface GKQuadtreeNode : NSObject

{
    struct GKCQuadTreeNode<NSObject> *_cQuadTreeNode;
    struct GKQuad _quad;
}

@property (nonatomic, readonly) struct GKQuad quad;

- (MISSING_TYPE *)max;
- (MISSING_TYPE *)min;
- (void *)cQuadTreeNode;
- (void)setCQuadTreeNode:(void *)arg1;

@end
