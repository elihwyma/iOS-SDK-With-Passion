/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKOctree : NSObject

{
    struct GKCOctree<NSObject> *_cOctree;
}

+ (id)octreeWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)removeElement:(id)arg1;
- (id)addElement:(id)arg1 withPoint: /* Error: Ran out of types for this method. */;
- (id)elementsAtPoint: /* Error: Ran out of types for this method. */;
- (_Bool)removeElement:(id)arg1 withNode:(id)arg2;
- (id)initWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;
- (id)addElement:(id)arg1 withBox:(struct GKBox)arg2;
- (id)elementsInBox:(struct GKBox)arg1;

@end
