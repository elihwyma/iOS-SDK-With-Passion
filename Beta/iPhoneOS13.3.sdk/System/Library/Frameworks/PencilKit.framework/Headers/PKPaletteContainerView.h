/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKAccessoryView;

@interface PKPaletteContainerView : UIView

{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    UIView *_contentView;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewLeftConstraint;
    NSLayoutConstraint *_contentViewRightConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    PKAccessoryView *_accessoryView;
    NSLayoutConstraint *_accessoryViewTopConstraint;
    NSLayoutConstraint *_accessoryViewBottomConstraint;
    NSLayoutConstraint *_accessoryViewLeftConstraint;
    NSLayoutConstraint *_accessoryViewRightConstraint;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint;
@property (retain, nonatomic) PKAccessoryView *accessoryView;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateUI;
- (void)_installContentView;
- (void)_installAccessoryView;

@end
