/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VKDebugTreeNode : NSObject

{
    VKDebugTreeNode *_parent;
    NSArray *_children;
}

@property (readonly) VKDebugTreeNode *parent;
@property (readonly) NSString *name;
@property (retain) NSArray *children;

- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (_Bool)isExpandable;
- (id)propertyColumn;
- (id)valueColumn;
- (id)tagsColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;

@end
