/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface DCNotesTextureView : UIView

{
    UIImage *_image;
    struct CGSize _phase;
}

@property (retain, nonatomic) UIImage *image;
@property struct CGSize phase;

@end
