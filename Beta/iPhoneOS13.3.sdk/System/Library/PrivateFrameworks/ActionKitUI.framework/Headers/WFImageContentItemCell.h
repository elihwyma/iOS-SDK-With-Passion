/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMapTable, NSMutableArray;

@protocol WFImageContentItemCellDelegate;

__attribute__((visibility("hidden")))
@interface WFImageContentItemCell : UITableViewCell

{
    NSMapTable *_activityIndicators;
    NSMutableArray *_imageViews;
    NSMutableArray *_selectedImageViews;
    NSArray *_items;
    id <WFImageContentItemCellDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id <WFImageContentItemCellDelegate> delegate;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)imageViewTapped:(id)arg1;
- (void)setSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;

@end
