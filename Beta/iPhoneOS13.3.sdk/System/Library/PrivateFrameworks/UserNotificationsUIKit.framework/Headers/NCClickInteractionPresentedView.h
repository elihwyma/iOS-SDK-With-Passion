/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSString, UILabel;

@interface NCClickInteractionPresentedView : UIView <Swift>

{
    UILabel *_titleLabel;
    struct CGSize _cachedSizeThatFits;
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *requiredVisualStyleCategories;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;
- (void)didMoveToSuperview;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1;
- (void)_updateTitleLabelTextAttributes;
- (void)_updateTitleLabelVisualStyling;
- (void)_updateTitleLabelAnchorPointAndPosition;

@end
