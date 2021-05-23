/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoOwnerCommentCell : UITableViewCell

{
    _Bool _usesCompactSeparators;
    NSAttributedString *_ownerString;
    UILabel *_ownerContentLabel;
    UIView *_styledSeparatorView;
}

@property (copy, nonatomic) NSAttributedString *ownerString;
@property (retain, nonatomic, readonly) UILabel *ownerContentLabel;
@property (retain, nonatomic, readonly) UIView *styledSeparatorView;
@property (nonatomic) _Bool usesCompactSeparators;

+ (id)_ownerStringForAsset:(id)arg1;
+ (double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateContentFromAsset:(id)arg1;

@end
