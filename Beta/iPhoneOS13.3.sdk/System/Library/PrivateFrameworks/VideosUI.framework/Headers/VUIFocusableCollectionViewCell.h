/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

__attribute__((visibility("hidden")))
@interface VUIFocusableCollectionViewCell : UICollectionViewCell

{
    _Bool _allowsFocus;
}

@property (nonatomic) _Bool allowsFocus;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;

@end
