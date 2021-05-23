/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPClusteringTreeNodeWrapper : NSObject

{
    _Bool _freeNodeOnDealloc;
    void *_node;
}

@property void *node;
@property _Bool freeNodeOnDealloc;

- (void)dealloc;
- (id)left;
- (id)descriptor;
- (float)distance;
- (id)initWithNode:(void *)arg1 freeNodeOnDealloc:(_Bool)arg2;
- (int)nodeId;
- (id)right;
- (float)avgDistance;
- (int)leafsCount;
- (id)getLeafNodes;

@end
