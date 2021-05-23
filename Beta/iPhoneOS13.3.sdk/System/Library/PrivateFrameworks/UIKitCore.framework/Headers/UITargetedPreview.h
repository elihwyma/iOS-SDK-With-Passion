/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIPreviewParameters, UIPreviewTarget, UIView;

@protocol NSCopying><NSObject, _UIPreviewProvider;

@interface UITargetedPreview : NSObject <Swift>

{
    _Bool _defaultPreview;
    _Bool _sourceViewIsInViewHierarchy;
    _Bool _hasCustomTarget;
    UIPreviewTarget *_target;
    UIView *_view;
    UIPreviewParameters *_parameters;
    UIView *_viewToSnapshot;
    id <_UIPreviewProvider> __PreviewProvider;
    id <NSCopying><NSObject> _internalIdentifer;
    UIView *_overridePositionTrackingView;
}

@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) _Bool defaultPreview;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;
@property (nonatomic, readonly) id <_UIPreviewProvider> _PreviewProvider;
@property (nonatomic, readonly) _Bool sourceViewIsInViewHierarchy;
@property (nonatomic, readonly) _Bool hasCustomTarget;
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode;
@property (copy, nonatomic) id <NSCopying><NSObject> internalIdentifer;
@property (nonatomic) _Bool _springboardPlatterStyle;
@property (retain, nonatomic, setter=_setOverridePositionTrackingView:) UIView *overridePositionTrackingView;
@property (nonatomic, getter=_prefersUnmaskedPlatterStyle, setter=_setPrefersUnmaskedPlatterStyle:) _Bool _prefersUnmaskedPlatterStyle;
@property (nonatomic, readonly) UIPreviewTarget *target;
@property (nonatomic, readonly) UIView *view;
@property (copy, nonatomic, readonly) UIPreviewParameters *parameters;
@property (nonatomic, readonly) struct CGSize size;

+ (id)new;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;
- (id)retargetedPreviewWithTarget:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (_Bool)containsPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)platterAnimator_getBounds:(struct CGRect *)arg1 center:(struct CGPoint *)arg2 transform:(struct CGAffineTransform *)arg3 forContainer:(id)arg4;
- (_Bool)platterAnimator_isValidPreview;

@end
