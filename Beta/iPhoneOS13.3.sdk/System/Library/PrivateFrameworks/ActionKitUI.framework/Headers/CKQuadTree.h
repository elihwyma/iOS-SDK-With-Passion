/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <Foundation/NSObject.h>

@class CKQuadTreeNode;

__attribute__((visibility("hidden")))
@interface CKQuadTree : NSObject

{
    CKQuadTreeNode *_rootNode;
}

@property (nonatomic, readonly) CKQuadTreeNode *rootNode;

- (id)init;
- (id)initWithPoints:(id)arg1;
- (void)visit:(CDUnknownBlockType)arg1;

@end
