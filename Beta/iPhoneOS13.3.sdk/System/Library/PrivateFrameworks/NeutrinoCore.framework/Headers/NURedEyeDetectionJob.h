/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageDataJob.h>

@class CIImage;

@interface NURedEyeDetectionJob : NUImageDataJob

{
    CIImage *_fullSizeImage;
}

- (void)cleanUp;
- (id)requestOptions;
- (_Bool)prepare:(out id *)arg1;

@end
