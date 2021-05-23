/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <UIKit/UIButton.h>

@class NSString, TLKLabel, TLKProminenceView, UIView;

@interface TLKStoreButton : UIButton

{
    _Bool _isEmphasized;
    TLKLabel *_label;
    UIView *_backgroundView;
    TLKProminenceView *_highlightView;
}

@property (retain) TLKLabel *label;
@property (retain) UIView *backgroundView;
@property (retain) TLKProminenceView *highlightView;
@property _Bool isEmphasized;
@property (copy, nonatomic) NSString *title;

- (id)init;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end
