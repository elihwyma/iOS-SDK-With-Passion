/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUGridLayoutOptions, NSArray, NSString, UILabel;

@protocol HUResizableCellDelegate;

@interface HUTriggerHeaderCell : UITableViewCell <Swift>

{
    HFItem *_item;
    HUGridLayoutOptions *_layoutOptions;
    double _contentBottomMargin;
    UILabel *_titleLabel;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) double contentBottomMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)prepareForReuse;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateTitleLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
