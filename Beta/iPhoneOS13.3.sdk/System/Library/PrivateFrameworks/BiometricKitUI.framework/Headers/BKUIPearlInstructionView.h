/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UILabel, UIScrollView;

@interface BKUIPearlInstructionView : UIView

{
    _Bool _darkMode;
    NSString *_instruction;
    NSString *_detail;
    UIScrollView *_scrollView;
    UILabel *_instructionLabel;
    UILabel *_detailLabel;
    double _labelsHorizontalMargin;
    NSLayoutConstraint *_labelsWidthConstraint;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UILabel *instructionLabel;
@property (weak, nonatomic) UILabel *detailLabel;
@property (nonatomic) double labelsHorizontalMargin;
@property (retain, nonatomic) NSLayoutConstraint *labelsWidthConstraint;
@property (retain, nonatomic) NSString *instruction;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) _Bool darkMode;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *instructionTextTopAnchor;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_configureConstraints;

@end
