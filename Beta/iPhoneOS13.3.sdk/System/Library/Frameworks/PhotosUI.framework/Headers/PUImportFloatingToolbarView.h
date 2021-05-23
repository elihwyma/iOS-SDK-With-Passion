/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIToolbar, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface PUImportFloatingToolbarView : UIView

{
    _Bool _shouldBlurBackground;
    NSString *_backdropViewGroupName;
    UIVisualEffectView *_visualEffectView;
    UIToolbar *_toolbar;
    UIView *_shadowView;
}

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *shadowView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) _Bool shouldBlurBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_updateBackground;
- (void)_updateBackdropViewGroupName;

@end
