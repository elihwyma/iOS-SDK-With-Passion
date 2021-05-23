/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPlatterTransformView : UIView

{
    _Bool _hidesSourceView;
    _Bool _forwardsHitTestingToSourceView;
    _Bool _matchesAlpha;
    _Bool _appliesMinificationFilter;
    _Bool _allowsUserInteraction;
    _Bool _shouldTakeOwnershipOfSourceView;
    UIView *_sourceView;
    UITargetedPreview *_sourcePreview;
    _UIPortalView *_portalView;
}

@property (retain, nonatomic) _UIPortalView *portalView;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) _Bool shouldTakeOwnershipOfSourceView;
@property (nonatomic) _Bool hidesSourceView;
@property (nonatomic) _Bool forwardsHitTestingToSourceView;
@property (nonatomic) _Bool matchesAlpha;
@property (nonatomic) _Bool appliesMinificationFilter;
@property (nonatomic) _Bool allowsUserInteraction;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateMinificationFilter;

@end
