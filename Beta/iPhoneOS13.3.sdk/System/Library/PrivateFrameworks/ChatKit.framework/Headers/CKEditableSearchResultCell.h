/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell

{
    _Bool _editing;
    UIImageView *_checkmarkView;
}

@property (nonatomic, getter=isEditing) _Bool editing;
@property (retain, nonatomic) UIImageView *checkmarkView;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end
