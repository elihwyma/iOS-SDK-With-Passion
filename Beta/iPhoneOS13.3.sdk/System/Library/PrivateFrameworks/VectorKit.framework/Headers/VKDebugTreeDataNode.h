/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKDebugTreeNode.h>

@interface VKDebugTreeDataNode : VKDebugTreeNode

{
    const struct DebugTreeNode *_node;
}

- (id)name;
- (_Bool)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)initWithDebugTreeNode:(const struct DebugTreeNode *)arg1 withParent:(id)arg2;
- (void)buildChildren;
- (long long)propertyCount;

@end
