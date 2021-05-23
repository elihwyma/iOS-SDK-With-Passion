/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSOrderedSet, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoSmilesCommentCell : UITableViewCell

{
    _Bool _isVideo;
    _Bool _usesCompactSeparators;
    UILabel *_smileContentLabel;
    NSOrderedSet *_userLikes;
    UIView *_styledSeparatorView;
}

@property (retain, nonatomic, readonly) UILabel *smileContentLabel;
@property (retain, nonatomic, readonly) UIView *styledSeparatorView;
@property (copy, nonatomic) NSOrderedSet *userLikes;
@property (nonatomic) _Bool isVideo;
@property (nonatomic) _Bool usesCompactSeparators;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(_Bool)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateContent;

@end
