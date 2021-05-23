/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUContactView, NSString;

@protocol HUResizableCellDelegate;

@interface HUHomeUserCollectionViewCell : UICollectionViewCell <Swift>

{
    HFItem *_item;
    HUContactView *_contactView;
}

@property (retain, nonatomic) HUContactView *contactView;
@property (nonatomic) double avatarDiameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

+ (id)_requiredKeyDescriptors;

- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_createSubviews;
- (void)updateUIWithAnimation:(_Bool)arg1;

@end
