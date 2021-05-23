/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDragItem.h>

@class NSItemProvider;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem

{
    UIDragItem *_localDragItem;
    NSItemProvider *_dropItemProvider;
}

@property (retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem;
@property (retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider;

- (id)itemProvider;
- (id)localObject;
- (void)setLocalObject:(id)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (id)_privateLocalContext;

@end
