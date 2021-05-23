/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIToolbar.h>

@class NSString, UIBlurEffect, UIView, UIVisualEffectView, _SFBarTheme;

@protocol _SFBarRegistrationToken;

@interface _SFToolbar : UIToolbar

{
    UIVisualEffectView *_backgroundView;
    UIBlurEffect *_customBackdropEffect;
    UIView *_separator;
    _Bool _usesLegacyDarkBackdrop;
    long long _placement;
    _SFBarTheme *_theme;
    id <_SFBarRegistrationToken> _barRegistration;
    UIView *_superviewOwningLayout;
}

@property (nonatomic, readonly) long long placement;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (nonatomic) _Bool usesLegacyDarkBackdrop;
@property (weak, nonatomic) id <_SFBarRegistrationToken> barRegistration;
@property (weak, nonatomic) UIView *superviewOwningLayout;
@property (nonatomic, readonly) double baselineOffsetAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isMinibar;
- (double)_contentMargin;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (id)initWithPlacement:(long long)arg1;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)didChangeArrangedBarItems:(id)arg1;
- (void)_cancelLinkAnimations;
- (void)_updateBackgroundViewEffects;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;

@end
