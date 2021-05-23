/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface CKQuadTreeNode : NSObject

{
    CKQuadTreeNode *_topRight;
    CKQuadTreeNode *_topLeft;
    CKQuadTreeNode *_bottomLeft;
    CKQuadTreeNode *_bottomRight;
    NSMutableDictionary *_userInfo;
    NSValue *_point;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly, getter=isLeaf) _Bool leaf;
@property (copy, nonatomic, readonly) NSArray *nodes;
@property (retain, nonatomic) NSValue *point;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)debugDescriptionWithLevel:(long long)arg1;
- (id)nodeForPoint:(struct CGPoint)arg1;
- (void)insertPoint:(struct CGPoint)arg1;
- (void)visit:(CDUnknownBlockType)arg1;

@end
