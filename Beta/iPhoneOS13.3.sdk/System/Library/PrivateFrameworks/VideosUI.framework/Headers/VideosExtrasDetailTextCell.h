/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface VideosExtrasDetailTextCell : UICollectionViewCell

{
    UILabel *_label;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_dynamicTypeDidChange;
- (void)configureForTextElement:(id)arg1 style:(id)arg2;

@end
