/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;

@interface SBCollectionViewCell : UICollectionViewCell

{
    _Bool _performSetHighlighted;
    _Bool _protectDelayedUnhighlights;
    id <SBCollectionViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id <SBCollectionViewCellDelegate> delegate;
@property (nonatomic) _Bool protectDelayedUnhighlights;

- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 afterDelay:(double)arg2;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(_Bool)arg1;

@end
