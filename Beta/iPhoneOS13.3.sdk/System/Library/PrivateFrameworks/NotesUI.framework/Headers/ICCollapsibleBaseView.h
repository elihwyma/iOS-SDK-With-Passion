/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface ICCollapsibleBaseView : UIView

{
    _Bool _collapsed;
    _Bool _setupComplete;
    double _leadingSpace;
    double _trailingSpace;
    struct UIView *_contentView;
    NSLayoutConstraint *_zeroWidthConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *zeroWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (nonatomic) _Bool setupComplete;
@property (nonatomic) double leadingSpace;
@property (nonatomic) double trailingSpace;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;

- (void)awakeFromNib;
- (void)performSetUpWithContentView:(struct UIView *)arg1;
- (void)performSetup;
- (void)setUpIfNeeded;
- (void)ic_setNeedsUpdateConstraints;
- (_Bool)wantsLayer;

@end
