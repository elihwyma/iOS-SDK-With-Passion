/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class MTMaterialView, NCClickInteractionPresentedView, NSString, UITraitCollection;

@interface NCClickInteractionPresentedControl : UIControl <Swift>

{
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_title;
    NCClickInteractionPresentedView *_presentedView;
    long long _materialRecipe;
    MTMaterialView *_backgroundMaterialView;
    UITraitCollection *_overrideTraitCollection;
}

@property (copy, nonatomic, readonly, getter=_title) NSString *title;
@property (nonatomic, readonly, getter=_presentedView) NCClickInteractionPresentedView *presentedView;
@property (nonatomic, readonly, getter=_materialRecipe) long long materialRecipe;
@property (nonatomic, readonly, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (retain, nonatomic) UITraitCollection *overrideTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2;
- (void)_configureContentViewIfNecessaryWithTitle:(id)arg1;
- (void)_configureMaterialViewsIfNecessary;
- (id)_newMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;

@end
