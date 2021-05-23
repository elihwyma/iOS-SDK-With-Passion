/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropItem : NSObject

{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
    struct CGSize _previewSize;
}

@property (retain, nonatomic) UIDragItem *dragItem;
@property (nonatomic) struct CGSize previewSize;
@property (retain, nonatomic) NSIndexPath *sourceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDragItem:(id)arg1 previewSize:(struct CGSize)arg2 sourceIndexPath:(id)arg3;

@end
