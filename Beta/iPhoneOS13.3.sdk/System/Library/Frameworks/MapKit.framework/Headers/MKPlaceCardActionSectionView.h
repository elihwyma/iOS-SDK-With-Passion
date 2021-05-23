/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class MKPlaceCardActionItem, MKPlatterView, NSLayoutConstraint, UIButton;

@protocol MKPlaceCardActionSectionViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView

{
    _Bool _useMarginLayout;
    _Bool _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
    _Bool _singleItemIsFullWidth;
    MKPlaceCardActionItem *_leftItem;
    MKPlaceCardActionItem *_rightItem;
    UIButton *_rightButton;
    UIButton *_leftButton;
    id <MKPlaceCardActionSectionViewDelegate> _delegate;
    MKPlatterView *_platterView;
}

@property (retain, nonatomic) MKPlaceCardActionItem *leftItem;
@property (retain, nonatomic) MKPlaceCardActionItem *rightItem;
@property (nonatomic) _Bool singleItemIsFullWidth;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) MKPlatterView *platterView;
@property (weak, nonatomic) id <MKPlaceCardActionSectionViewDelegate> delegate;

+ (id)_font:(_Bool)arg1;
+ (void)_setButtonString:(id)arg1 forActionItem:(id)arg2 isLeftItem:(_Bool)arg3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (void)setTopHairlineHidden:(_Bool)arg1;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(_Bool)arg3 singleItemIsFullWidth:(_Bool)arg4 useMarginLayout:(_Bool)arg5;
- (void)_setUpViewWithButtons;
- (id)_makePlaceActionButtonWithActionItem:(id)arg1 isLeftItem:(_Bool)arg2 useSmallFonts:(_Bool)arg3;
- (id)currentLeftItem;
- (id)glyphFont;
- (void)_leftButtonIsPressed:(id)arg1;
- (void)_rightButtonIsPressed:(id)arg1;
- (id)initWithLeftActionItem:(id)arg1 rightActionItem:(id)arg2 useSmallFonts:(_Bool)arg3 singleItemIsFullWidth:(_Bool)arg4;

@end
