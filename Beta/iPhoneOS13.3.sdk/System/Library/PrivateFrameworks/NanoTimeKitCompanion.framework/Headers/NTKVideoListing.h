/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, CLKVideo, NSString, UIColor, UIImage;

@interface NTKVideoListing : NSObject

{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    UIColor *_overlayColor;
    unsigned long long _theme;
    long long _variant;
    long long _clip;
    unsigned long long _tags;
}

@property (nonatomic, readonly) UIColor *overlayColor;
@property (nonatomic, readonly) unsigned long long theme;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, readonly) long long clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) UIImage *image;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasTag:(unsigned long long)arg1;
- (_Bool)snapshotDiffers:(id)arg1;
- (void)discardAssets;
- (void)_setHasAssets;
- (id)initForDevice:(id)arg1 withName:(id)arg2 videoName:(id)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned long long)arg6 variant:(long long)arg7 clip:(long long)arg8 tags:(unsigned long long)arg9;

@end
