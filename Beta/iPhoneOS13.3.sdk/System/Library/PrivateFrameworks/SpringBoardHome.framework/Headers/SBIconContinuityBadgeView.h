/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class NSString, SBDarkeningImageView, SBFParallaxSettings, SBIconAccessoryImage, UIImageView;

@protocol SBIconListLayout;

@interface SBIconContinuityBadgeView : UIView

{
    id <SBIconListLayout> _listLayout;
    long long _badgeType;
    SBIconAccessoryImage *_backgroundImage;
    SBIconAccessoryImage *_foregroundImage;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_foregroundView;
}

@property (nonatomic, readonly) SBIconAccessoryImage *backgroundImage;
@property (retain, nonatomic) SBIconAccessoryImage *foregroundImage;
@property (nonatomic, readonly) SBDarkeningImageView *backgroundView;
@property (nonatomic, readonly) UIImageView *foregroundView;
@property (nonatomic) long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id <SBIconListLayout> listLayout;

+ (id)backgroundImageCache;
+ (id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (void)prepareForReuse;
- (struct CGSize)badgeSize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGPoint)accessoryCenterForIconBounds:(struct CGRect)arg1;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (_Bool)displayingAccessory;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (id)_checkoutBackgroundImage;
- (struct CGPoint)layoutOffset;
- (void)_clearIcon;

@end
