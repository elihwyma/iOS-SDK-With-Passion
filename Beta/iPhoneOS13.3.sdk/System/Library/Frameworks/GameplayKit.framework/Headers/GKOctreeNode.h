/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@interface GKOctreeNode : NSObject

{
    struct GKCOctreeNode<NSObject> *_cOctreeNode;
}

@property (readonly) struct GKBox box;

- (void *)cOctreeNode;
- (void)setCOctreeNode:(void *)arg1;

@end
