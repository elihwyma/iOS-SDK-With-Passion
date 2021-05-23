/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

__attribute__((visibility("hidden")))
@interface _TVListDescriptionViewCell : UICollectionViewCell

{
    _Bool _disabled;
}

@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)didUpdateFocusFromView:(id)arg1;

@end
