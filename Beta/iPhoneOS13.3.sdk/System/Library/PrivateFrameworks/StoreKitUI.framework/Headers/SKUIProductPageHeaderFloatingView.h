/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUIColorScheme, UIControl, UISegmentedControl, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageHeaderFloatingView : UIView

{
    UISegmentedControl *_sectionControl;
    SKUIColorScheme *_colorScheme;
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    _Bool _isPad;
}

@property (nonatomic) double backdropAlpha;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) UIControl *sectionControl;
@property (nonatomic) long long selectedSectionIndex;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSectionTitles:(id)arg1 isPad:(_Bool)arg2;
- (void)_reloadBackdropView;

@end
