/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class BSUIMappedImageCache;

@interface HFPosterFrameImageCache : NSObject

{
    BSUIMappedImageCache *_imageCache;
}

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;

+ (id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;

- (id)init;
- (id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;
- (void)purgeAllImages;
- (void)addImage:(id)arg1 forCameraClipIdentifierString:(id)arg2 withOffset:(float)arg3;

@end
