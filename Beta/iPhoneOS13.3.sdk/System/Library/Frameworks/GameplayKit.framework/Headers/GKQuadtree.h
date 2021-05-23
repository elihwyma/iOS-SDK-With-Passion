/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKQuadtree : NSObject

{
    struct GKCQuadTree<NSObject> *_cQuadTree;
}

+ (id)quadtreeWithBoundingQuad:(struct GKQuad)arg1 minimumCellSize:(float)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)removeElement:(id)arg1;
- (id)initWithBoundingQuad:(struct GKQuad)arg1 minimumCellSize:(float)arg2;
- (id)addElement:(id)arg1 withPoint: /* Error: Ran out of types for this method. */;
- (id)addElement:(id)arg1 withQuad:(struct GKQuad)arg2;
- (id)elementsAtPoint: /* Error: Ran out of types for this method. */;
- (id)elementsInQuad:(struct GKQuad)arg1;
- (_Bool)removeElement:(id)arg1 withNode:(id)arg2;

@end
