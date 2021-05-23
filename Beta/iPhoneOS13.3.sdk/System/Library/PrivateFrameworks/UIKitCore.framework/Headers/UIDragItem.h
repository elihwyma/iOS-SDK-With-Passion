/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSItemProvider, UITargetedDragPreview, UITextRange, _UIDragPreviewBlockProvider;

@protocol _UIDragDropSessionInternal, _UIDragSetDownAnimationTarget;

@interface UIDragItem : NSObject

{
    _Bool _dirty;
    _Bool _deferPreviewUpdates;
    NSItemProvider *_itemProvider;
    id _localObject;
    CDUnknownBlockType _previewProvider;
    _UIDragPreviewBlockProvider *_dragPreviewBlockProvider;
    unsigned long long _preferredPreviewType;
    unsigned long long _updatedPreviewType;
    id <_UIDragDropSessionInternal> _dragDropSession;
    UITargetedDragPreview *_targetedLiftPreview;
    id <_UIDragSetDownAnimationTarget> _sourceVisualTarget;
    id <_UIDragSetDownAnimationTarget> _destinationVisualTarget;
    id _privateLocalContext;
    unsigned long long __managementState;
    struct CGSize _visibleDropItemSize;
}

@property (retain, nonatomic, setter=_setDraggedTextRange:) UITextRange *_draggedTextRange;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) _UIDragPreviewBlockProvider *dragPreviewBlockProvider;
@property (nonatomic) unsigned long long preferredPreviewType;
@property (nonatomic) unsigned long long updatedPreviewType;
@property (weak, nonatomic, getter=_dragDropSession, setter=_setDragDropSession:) id <_UIDragDropSessionInternal> dragDropSession;
@property (retain, nonatomic, getter=_targetedLiftPreview) UITargetedDragPreview *targetedLiftPreview;
@property (nonatomic, getter=_visibleDropItemSize, setter=_setVisibleDropItemSize:) struct CGSize visibleDropItemSize;
@property (weak, nonatomic, getter=_sourceVisualTarget, setter=_setSourceVisualTarget:) id <_UIDragSetDownAnimationTarget> sourceVisualTarget;
@property (weak, nonatomic, getter=_destinationVisualTarget, setter=_setDestinationVisualTarget:) id <_UIDragSetDownAnimationTarget> destinationVisualTarget;
@property (nonatomic, getter=_isDirty, setter=_setDirty:) _Bool dirty;
@property (nonatomic, getter=_deferPreviewUpdates, setter=_setDeferPreviewUpdates:) _Bool deferPreviewUpdates;
@property (retain, nonatomic, getter=_privateLocalContext, setter=_setPrivateLocalContext:) id privateLocalContext;
@property (nonatomic) unsigned long long _managementState;
@property (retain, nonatomic) id localObject;
@property (copy, nonatomic) CDUnknownBlockType previewProvider;

- (id)initWithItemProvider:(id)arg1;
- (id)_previewProviderForType:(unsigned long long)arg1;
- (void)_previewNeedsUpdateForType:(unsigned long long)arg1;
- (void)_updatePreferredPreview;
- (void)_loadOriginalImageComponentProvider;
- (id)_currentPreviewProvider;
- (void)_uicmi_setAssociatedMenuIdentifier:(id)arg1;
- (id)_uicmi_getAssociatedMenuIdentifier;

@end
