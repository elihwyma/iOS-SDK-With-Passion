/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <Swift>

{
    UIView *_shadowView;
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;
    _Bool _usesInnerShadow;
    _Bool _usesRoundedCorners;
    id <UILayoutContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id <UILayoutContainerViewDelegate> delegate;
@property (nonatomic) _Bool usesInnerShadow;
@property (nonatomic) _Bool usesRoundedCorners;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)_setFlagsFromDelegate:(id)arg1;
- (void)_updateShadowViews;
- (void)_installShadowViews;
- (void)_tearDownShadowViews;

@end
