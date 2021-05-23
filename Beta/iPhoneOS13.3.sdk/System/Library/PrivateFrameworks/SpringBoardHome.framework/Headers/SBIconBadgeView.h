/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSString, SBDarkeningImageView, SBFParallaxSettings, SBIconAccessoryImage, UIImageView;

@protocol SBIconListLayout;

@interface SBIconBadgeView : UIView <Swift>

{
    NSString *_text;
    UIImageView *_incomingTextView;
    _Bool _displayingAccessory;
    SBIconAccessoryImage *_backgroundImage;
    SBDarkeningImageView *_backgroundView;
    SBIconAccessoryImage *_textImage;
    UIImageView *_textView;
    SBFParallaxSettings *_parallaxSettings;
    id <SBIconListLayout> _listLayout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (retain, nonatomic) id <SBIconListLayout> listLayout;

+ (struct CGPoint)_textOffset;
+ (id)backgroundImageCache;
+ (id)_checkoutImageForText:(id)arg1 font:(id)arg2 highlighted:(_Bool)arg3;
+ (double)_textPadding;
+ (id)_createImageForText:(id)arg1 font:(id)arg2 highlighted:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (void)prepareForReuse;
- (struct CGSize)badgeSize;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)font;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_applyParallaxSettings;
- (struct CGPoint)accessoryCenterForIconBounds:(struct CGRect)arg1;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (_Bool)displayingAccessory;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (void)_clearText;
- (id)_checkoutBackgroundImage;
- (void)_configureAnimatedForText:(id)arg1 highlighted:(_Bool)arg2 animator:(id)arg3;
- (void)_resizeForTextImage:(id)arg1;
- (struct CGPoint)layoutOffset;
- (struct CGSize)intrinsicContentSizeForTextImage:(id)arg1;
- (void)_crossfadeToTextImage:(id)arg1 animator:(id)arg2;
- (void)_zoomInWithTextImage:(id)arg1 animator:(id)arg2;
- (void)_zoomOutWithAnimator:(id)arg1;

@end
