/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITargetedPreview.h>

@class NSDictionary, NSString, UIView, _DUIPreview, _UIDraggingImageComponent;

@protocol _UIDragPreviewProvider;

@interface UITargetedDragPreview : UITargetedPreview

{
    _Bool _didSetLiftAnchorPoint;
    _DUIPreview *_duiPreview;
    _UIDraggingImageComponent *_imageComponent;
    _Bool _preventAfterScreenUpdatesSnapshot;
    NSDictionary *__springboardParameters;
    struct CGPoint _liftAnchorPoint;
}

@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) _Bool defaultPreview;
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) _Bool preventAfterScreenUpdatesSnapshot;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;
@property (nonatomic, readonly) id <_UIDragPreviewProvider> _dragPreviewProvider;
@property (nonatomic) struct CGPoint liftAnchorPoint;
@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, readonly) CDUnknownBlockType _duiPreviewProvider;
@property (copy, nonatomic) NSDictionary *_springboardParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)previewForURL:(id)arg1 target:(id)arg2;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;

- (id)retargetedPreviewWithTarget:(id)arg1;
- (void)_setPreviewMode:(long long)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (void)takeLiftAnchorPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (id)imageComponent;

@end
