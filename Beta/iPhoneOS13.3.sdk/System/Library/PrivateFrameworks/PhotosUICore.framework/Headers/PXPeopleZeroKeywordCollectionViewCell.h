/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSearchZeroKeywordCollectionViewCell.h>

@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell

{
    UIView *_peopleContentView;
}

@property (retain, nonatomic) UIView *peopleContentView;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (void)setPeople:(id)arg1 withThumbnailSize:(struct CGSize)arg2;

@end
