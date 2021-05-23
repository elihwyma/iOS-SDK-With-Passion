/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSLayoutConstraint, NSSet, NSString;

@protocol HUResizableCellDelegate;

@interface HUControlPanelCell : UITableViewCell <Swift>

{
    HFItem *_item;
    NSLayoutConstraint *_minHeightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint;
@property (nonatomic, readonly) NSSet *allControlViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)updateConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
