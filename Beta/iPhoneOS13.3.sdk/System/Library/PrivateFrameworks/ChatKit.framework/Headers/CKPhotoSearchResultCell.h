/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableSearchResultCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface CKPhotoSearchResultCell : CKEditableSearchResultCell

{
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_livePhotoImage;
    NSString *_identifier;
    UILabel *_durationLabel;
    UIImageView *_durationGradientImage;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *livePhotoImage;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *durationGradientImage;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)_thumbnailGenerated:(id)arg1;
- (void)_livePhotoUpdated:(id)arg1;
- (void)_videoDurationUpdated:(id)arg1;
- (void)_configureDurationLabelForResult:(id)arg1;

@end
