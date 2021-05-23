/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class GEOQuickLink, MKVibrantView, NSArray, NSLayoutConstraint, UIImageView, _MKUILabel;

@protocol MKQuickLinkItemViewDelegate;

__attribute__((visibility("hidden")))
@interface MKQuickLinkItemView : UIView

{
    _MKUILabel *_label;
    _MKUILabel *_appLabel;
    MKVibrantView *_vibrantView;
    UIImageView *_appImageView;
    NSArray *_constraints;
    NSLayoutConstraint *_topToFirstBaseline;
    NSLayoutConstraint *_lastToFirstBaseline;
    NSLayoutConstraint *_lastToBotomBaseline;
    _Bool _touched;
    id <MKQuickLinkItemViewDelegate> _delegate;
    GEOQuickLink *_quickLink;
}

@property (weak, nonatomic) id <MKQuickLinkItemViewDelegate> delegate;
@property (retain, nonatomic) GEOQuickLink *quickLink;
@property (nonatomic) _Bool touched;

+ (id)labelFont;
+ (id)widthDictionary;
+ (id)appLabelFont;
+ (double)widthBrandItem;
+ (double)minWidthForString:(id)arg1 forSize:(id)arg2;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)_createConstraints;
- (void)_contentSizeDidChange;
- (id)initWithQuickLink:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_loadOfficialApp;
- (void)_loadAppArtwork:(id)arg1 adamID:(id)arg2;
- (void)updateColor;

@end
