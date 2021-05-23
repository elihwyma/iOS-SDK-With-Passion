/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString, UIImage;

@interface PSLazyImagePromise : NSObject

{
    NSString *_imagePath;
    NSString *_imageName;
    NSBundle *_imageBundle;
    CDUnknownBlockType _loadBlock;
    UIImage *_image;
    _Bool _imageLoaded;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, getter=isImageLoaded) _Bool imageLoaded;

+ (id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imagePromiseWithImagePath:(id)arg1;
+ (id)imagePromiseWithLoadBlock:(CDUnknownBlockType)arg1;

- (void)loadImage;

@end
