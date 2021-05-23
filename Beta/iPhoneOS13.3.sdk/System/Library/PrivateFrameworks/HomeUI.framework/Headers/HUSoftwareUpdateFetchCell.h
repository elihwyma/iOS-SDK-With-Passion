/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSString, UIActivityIndicatorView, UILabel, UIStackView, UIView;

@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateFetchCell : UITableViewCell <Swift>

{
    HFItem *_item;
    UIStackView *_mainStackView;
    UIView *_titleSpinnerView;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UIView *titleSpinnerView;
@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
