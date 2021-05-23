/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class MFModernAtomView;

@interface MFModernAtomBackgroundView : UIView

{
    UIView *_selectedView;
    unsigned long long _selectionStyle;
    UIView *_separatorView;
    int _separatorStyle;
    _Bool _selected;
    double _scalingFactor;
    MFModernAtomView *_hostAtomView;
}

@property (nonatomic, readonly) UIView *selectedView;
@property (nonatomic, readonly) UIView *separatorView;
@property (weak, nonatomic) MFModernAtomView *hostAtomView;
@property (nonatomic) int separatorStyle;
@property (nonatomic) double scalingFactor;

- (_Bool)isSelected;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)tintColorDidChange;
- (void)_setSelectionStyle:(unsigned long long)arg1;
- (id)_chevronImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 style:(unsigned long long)arg3;
- (double)separatorWidth;
- (struct UIEdgeInsets)_backgroundBleedArea;

@end
