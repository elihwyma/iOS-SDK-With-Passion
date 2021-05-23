/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKVideo, UIImage;

@interface CLKMediaAsset : NSObject

{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    double _videoDuration;
    double _stillDisplayTime;
}

@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) double stillDisplayTime;

+ (id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
+ (id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;
+ (id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;
- (id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3;
- (id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5;

@end
