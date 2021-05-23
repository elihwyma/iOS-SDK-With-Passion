/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUSoftwareUpdateInfoView, NSString, UIView;

@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <Swift>

{
    id <HUResizableCellDelegate> _resizingDelegate;
    HUSoftwareUpdateInfoView *_infoView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property (nonatomic, readonly) HUSoftwareUpdateInfoView *infoView;
@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (nonatomic) _Bool topSeparatorVisible;
@property (nonatomic) _Bool bottomSeparatorVisible;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1;

@end
