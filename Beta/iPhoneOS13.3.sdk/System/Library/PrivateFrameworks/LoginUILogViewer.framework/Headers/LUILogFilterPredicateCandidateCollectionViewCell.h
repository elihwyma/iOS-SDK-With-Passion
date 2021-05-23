/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface LUILogFilterPredicateCandidateCollectionViewCell : UICollectionViewCell

{
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_setupUI;
- (id)_createTitleLabel;
- (void)layoutSubViews;

@end
