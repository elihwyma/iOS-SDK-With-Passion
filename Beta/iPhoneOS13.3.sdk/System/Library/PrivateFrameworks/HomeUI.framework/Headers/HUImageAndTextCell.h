/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSArray, NSString, UIImageView, UILayoutGuide, UITextView;

@protocol HUResizableCellDelegate;

@interface HUImageAndTextCell : UITableViewCell <Swift>

{
    HFItem *_item;
    UITextView *_messageTextView;
    UIImageView *_infoImageView;
    NSArray *_contentConstraints;
    UILayoutGuide *_infoImageViewTrailingMarginLayoutGuide;
    struct CGSize _imageViewRecommendedSize;
}

@property (nonatomic, readonly) UIImageView *infoImageView;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (nonatomic, readonly) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide;
@property (nonatomic, readonly) UITextView *messageTextView;
@property (nonatomic) struct CGSize imageViewRecommendedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool prefersSeparatorsHidden;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)prepareForReuse;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_resetContentConstraints;

@end
