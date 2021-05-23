/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUCropMaskView : UIView

{
    UIView *_opaqueView;
}

@property (nonatomic, readonly) UIView *opaqueView;

- (id)initWithFrame:(struct CGRect)arg1;

@end
