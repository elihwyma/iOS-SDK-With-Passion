/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRObject.h>

@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree : CRObject

@property (nonatomic, readonly) CROrderedSet *nodes;
@property (nonatomic, readonly) CRTreeNode *root;
@property (nonatomic, readonly) CRDocument *document;
@property (nonatomic, readonly) long long count;

+ (id)CRProperties;

- (id)init;
- (void)removeNode:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)invalidateChildren;
- (void)computeChildren;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;

@end
