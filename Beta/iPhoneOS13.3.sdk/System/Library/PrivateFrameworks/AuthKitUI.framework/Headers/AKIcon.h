/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface AKIcon : NSObject

{
    double _scale;
    struct CGSize _size;
    NSString *_name;
    NSString *_bundleID;
    NSData *_data;
    unsigned long long _maskingStyle;
}

+ (double)_screenScale;
+ (double)defaultScale;
+ (id)iconWithData:(id)arg1 scale:(double)arg2;
+ (id)iconWithPresentationContext:(id)arg1;
+ (id)iconWithIconContext:(id)arg1;
+ (id)iconWithName:(id)arg1 size:(struct CGSize)arg2;
+ (id)iconWithBundleID:(id)arg1 size:(struct CGSize)arg2;

- (id)initWithName:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (unsigned long long)iconType;
- (id)initWithPresentationContext:(id)arg1;
- (id)initWithIconContext:(id)arg1;
- (id)initWithBundleID:(id)arg1 size:(struct CGSize)arg2;
- (id)_imageWithData:(id)arg1 scale:(double)arg2 masked:(_Bool)arg3;
- (id)_imageWithName:(id)arg1 size:(struct CGSize)arg2 masked:(_Bool)arg3;
- (id)_imageWithBundleID:(id)arg1 size:(struct CGSize)arg2 masked:(_Bool)arg3;
- (_Bool)_shouldMaskImage;
- (id)unmaskedImage;
- (id)_dataForImage:(id)arg1;
- (id)maskedImage;
- (id)automaskedImage;
- (id)_catalogueImageWithName:(id)arg1;
- (_Bool)_hasInstalledApplicationWithBundleID:(id)arg1;
- (id)_iconWithImage:(id)arg1;
- (id)_imageWithIcon:(id)arg1 size:(struct CGSize)arg2 masked:(_Bool)arg3;
- (id)_applicationProxyForBundleID:(id)arg1;
- (struct CGImage *)_CGImageForImage:(id)arg1;
- (id)unmaskedImageData;
- (id)maskedImageData;
- (id)automaskedImageData;

@end
