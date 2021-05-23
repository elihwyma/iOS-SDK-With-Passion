/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUButtonCell, NSString, UIView;

@protocol HUResizableCellDelegate;

@interface HUButtonCollectionViewCell : UICollectionViewCell <Swift>

{
    HUButtonCell *_buttonView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (nonatomic, readonly) HUButtonCell *buttonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool topSeparatorVisible;
@property (nonatomic) _Bool bottomSeparatorVisible;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
