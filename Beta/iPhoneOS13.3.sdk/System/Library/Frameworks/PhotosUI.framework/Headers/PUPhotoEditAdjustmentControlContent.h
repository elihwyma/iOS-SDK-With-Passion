/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAdjustmentControlContent : NSObject

{
    UIImage *_image;
    UIColor *_color;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *color;

@end
