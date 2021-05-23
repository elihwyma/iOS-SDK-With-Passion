/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUSoftwareUpdateInfoView, NSString;

@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <Swift>

{
    id <HUResizableCellDelegate> _resizingDelegate;
    HUSoftwareUpdateInfoView *_infoView;
}

@property (retain, nonatomic) HUSoftwareUpdateInfoView *infoView;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;

- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1;

@end
