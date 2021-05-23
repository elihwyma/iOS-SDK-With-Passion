/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSEnumerator.h>

@class NATreeNode, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NATreeNodeDeepNodeEnumerator : NSEnumerator

{
    NSMutableArray *_enumeratorStack;
    NATreeNode *_node;
}

@property (copy, nonatomic, readonly) NATreeNode *node;
@property (copy, nonatomic, readonly) NSArray *allObjects;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nextObject;
- (id)initWithNode:(id)arg1;

@end
