/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment

{
    struct vImage_Buffer buffer;
    int _nChannels;
}

@property int nChannels;

+ (struct __CVBuffer *)createCVPixelBufferFromvImage:(struct vImage_Buffer)arg1 withPixelFormat:(unsigned int)arg2;

- (struct vImage_Buffer)copyAsImageGrayscaleOrBGRA;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;

@end
