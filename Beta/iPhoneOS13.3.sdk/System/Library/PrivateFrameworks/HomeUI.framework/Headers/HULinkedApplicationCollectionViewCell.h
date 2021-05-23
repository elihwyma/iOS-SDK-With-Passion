/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HULinkedApplicationView, NSString, UIView;

@protocol HUResizableCellDelegate;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <Swift>

{
    HULinkedApplicationView *_linkedApplicationView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property (nonatomic, readonly) HULinkedApplicationView *linkedApplicationView;
@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic) _Bool topSeparatorVisible;
@property (nonatomic) _Bool bottomSeparatorVisible;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
