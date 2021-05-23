/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKDebugTreeNode.h>

@interface VKDebugTreePropertyNode : VKDebugTreeNode

{
    const struct DebugTreeProperty *_property;
}

- (id)name;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)initWithDebugTreeProperty:(const struct DebugTreeProperty *)arg1 withParent:(id)arg2;
- (id)idValueForTreeValue:(const struct DebugTreeValue *)arg1;

@end
