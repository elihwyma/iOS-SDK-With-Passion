/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class PUPhotoViewContentHelper;

@interface PUPhotoView : UIView

{
    PUPhotoViewContentHelper *_contentHelper;
}

@property (nonatomic, readonly) PUPhotoViewContentHelper *contentHelper;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
