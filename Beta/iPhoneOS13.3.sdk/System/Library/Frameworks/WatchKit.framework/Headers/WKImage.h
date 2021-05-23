/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, UIImage;

@interface WKImage : NSObject

{
    UIImage *_image;
    NSData *_imageData;
    NSString *_imageName;
}

@property (retain) UIImage *image;
@property (retain) NSData *imageData;
@property (retain) NSString *imageName;

+ (_Bool)supportsSecureCoding;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithImage:(id)arg1;
+ (id)imageWithImageName:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
