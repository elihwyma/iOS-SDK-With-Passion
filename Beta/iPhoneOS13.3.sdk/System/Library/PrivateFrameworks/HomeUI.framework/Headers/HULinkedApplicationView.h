/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HULinkedApplicationRatingView, NSArray, NSString, NSURL, UIButton, UIImageView, UILabel;

@protocol HUResizableCellDelegate;

@interface HULinkedApplicationView : UIView <Swift>

{
    _Bool _isInstalled;
    HFItem *_item;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    HULinkedApplicationRatingView *_ratingView;
    UILabel *_priceLabel;
    UILabel *_installedLabel;
    UIButton *_viewButton;
    NSString *_bundleID;
    NSURL *_storeURL;
    NSArray *_currentConstraints;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *publisherLabel;
@property (retain, nonatomic) HULinkedApplicationRatingView *ratingView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *installedLabel;
@property (retain, nonatomic) UIButton *viewButton;
@property (nonatomic) _Bool isInstalled;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_viewButtonTapped:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
