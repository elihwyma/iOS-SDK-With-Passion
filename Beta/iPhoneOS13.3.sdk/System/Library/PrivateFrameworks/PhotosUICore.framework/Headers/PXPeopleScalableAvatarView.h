/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartScaleView.h>

@class UIImageView;

@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView

{
    UIImageView *_imageView;
    id <PXPerson> _person;
}

@property (retain) UIImageView *imageView;
@property (retain, nonatomic) id <PXPerson> person;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateImage;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)viewScaleDidChange;
- (void)_updateImageAndWait:(_Bool)arg1;

@end
