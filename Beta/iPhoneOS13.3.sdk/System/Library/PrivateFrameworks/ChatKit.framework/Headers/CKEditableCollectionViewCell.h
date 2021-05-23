/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell

{
    _Bool _editing;
    _Bool _hidesCheckmark;
    UIImageView *_checkmark;
    struct CGRect _contentAlignmentRect;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _marginInsets;
}

@property (retain, nonatomic) UIImageView *checkmark;
@property (nonatomic) struct CGRect contentAlignmentRect;
@property (nonatomic, readonly) struct UIEdgeInsets contentAlignmentInsets;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) _Bool hidesCheckmark;

- (id)description;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)_horizontalSafeAreaInsets;
- (void)updateCheckmarkImage;

@end
