/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UILabel, WebBookmark, _SFHairlineBorderView;

@protocol _SFSiteIconViewUpdateObserver;

@interface _SFSiteIconView : UIView

{
    UIImageView *_imageView;
    UIView *_backgroundView;
    UILabel *_monogramLabel;
    long long _state;
    id _touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    _Bool _modernImageIsTransparent;
    _Bool _shouldUseModernStyling;
    _Bool _shouldShowDropShadow;
    WebBookmark *_bookmark;
    UIImage *_leadingImage;
    id <_SFSiteIconViewUpdateObserver> _updateObserver;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (retain, nonatomic) UIImage *leadingImage;
@property (nonatomic, readonly) UIImage *image;
@property (weak, nonatomic) id <_SFSiteIconViewUpdateObserver> updateObserver;
@property (nonatomic) _Bool shouldUseModernStyling;
@property (nonatomic) _Bool shouldShowDropShadow;

- (void)dealloc;
- (void)_setState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBookmarkData;
- (void)_cancelTouchIconRequest;
- (id)_effectiveBackgroundColor;
- (void)_updateMonogramLabelSizeAndFont;
- (struct CGRect)_imageFrame;
- (void)_setSiteIcon:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_displayDefaultFolderIcon;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)arg1;
- (id)_tintedFolderImage;
- (void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2;
- (void)_setImage:(id)arg1 withBackgroundColor:(id)arg2;
- (double)_monogramFontSize;
- (long long)_inferredIconSize;

@end
