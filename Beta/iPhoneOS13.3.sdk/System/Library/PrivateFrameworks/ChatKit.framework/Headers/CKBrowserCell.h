/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKBadgeView, CKBrowserSelectionLabelAccessoryView, UIImageView, UILabel, UIView;

@protocol CKBrowserCellDelegate;

@interface CKBrowserCell : UICollectionViewCell

{
    _Bool _jitter;
    _Bool _shouldShowLabel;
    id <CKBrowserCellDelegate> _delegate;
    CKBadgeView *_badgeView;
    unsigned long long _shinyStatus;
    CKBrowserSelectionLabelAccessoryView *_shinyStatusView;
    UILabel *_browserLabel;
    UIImageView *_borderView;
    struct CGRect _selectionFrame;
}

@property (readonly) UIView *iconView;
@property (nonatomic) unsigned long long shinyStatus;
@property (retain, nonatomic) CKBrowserSelectionLabelAccessoryView *shinyStatusView;
@property (retain, nonatomic) UILabel *browserLabel;
@property (retain, nonatomic) UIImageView *borderView;
@property (nonatomic) struct CGRect selectionFrame;
@property (weak, nonatomic) id <CKBrowserCellDelegate> delegate;
@property (retain, nonatomic) CKBadgeView *badgeView;
@property (nonatomic) _Bool jitter;
@property (nonatomic) _Bool shouldShowLabel;

+ (id)reuseIdentifier;
+ (Class)classForItemType:(long long)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBorderStyle:(long long)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (struct CGRect)browserCellIconFrame;
- (double)browserCellSelectionBorderOutset;

@end
