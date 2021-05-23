/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoStreamAlbumTableViewCell.h>

@class NSArray, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell

{
    UIImageView *_albumImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSArray *_currentConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) NSArray *currentConstraints;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)detailText;
- (void)setDetailText:(id)arg1;
- (void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;

@end
