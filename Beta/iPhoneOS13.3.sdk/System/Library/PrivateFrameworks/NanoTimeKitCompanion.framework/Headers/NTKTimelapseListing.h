/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKVideo, NSString, NTKPhotoAnalysis, UIImage;

@interface NTKTimelapseListing : NSObject

{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_videoName;
    NSString *_imageName;
    NTKPhotoAnalysis *_photoAnalysis;
    unsigned long long _theme;
    long long _videoIndex;
}

@property (nonatomic, readonly) unsigned long long theme;
@property (nonatomic, readonly) long long videoIndex;
@property (nonatomic, readonly) NTKPhotoAnalysis *photoAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSimilarTo:(id)arg1;
- (_Bool)snapshotDiffers:(id)arg1;
- (void)discardAssets;
- (id)initForDevice:(id)arg1 withTheme:(unsigned long long)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4;
- (void)_setHasAssets;

@end
