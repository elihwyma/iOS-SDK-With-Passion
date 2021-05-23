/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCompositeMediaResult.h>

@class NSNumber;

@interface PHImageResult : PHCompositeMediaResult

{
    struct CGImage *_imageRef;
    NSNumber *_exifOrientation;
}

@property (copy, nonatomic) NSNumber *exifOrientation;

- (void)dealloc;
- (struct CGImage *)imageRef;
- (id)imageURL;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (_Bool)containsValidData;
- (id)imageUTI;
- (long long)uiOrientation;
- (void)setImageRef:(struct CGImage *)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImageUTI:(id)arg1;

@end
