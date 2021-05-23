/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <PhotosFormats/PFCameraAdjustments.h>

@class AVApplePortraitMetadata, NSString;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (copy, nonatomic) NSString *effectFilterName;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (retain, nonatomic) AVApplePortraitMetadata *portraitMetadata;
@property (nonatomic, getter=isDepthEnabled) _Bool depthEnabled;
@property (nonatomic) struct CGRect cropRect;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
