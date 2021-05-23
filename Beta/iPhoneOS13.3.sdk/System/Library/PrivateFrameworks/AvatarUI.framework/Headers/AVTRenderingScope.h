/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarPose, NSString;

@interface AVTRenderingScope : NSObject

{
    float _sizeModifier;
    NSString *_framingMode;
    long long _renderingType;
    double _scale;
    unsigned long long _options;
    AVTAvatarPose *_pose;
}

@property (nonatomic, readonly) NSString *framingMode;
@property (nonatomic, readonly) float sizeModifier;
@property (nonatomic, readonly) long long renderingType;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) AVTAvatarPose *pose;

+ (id)gridThumbnailScope;
+ (id)largeThumbnailScope;
+ (unsigned long long)scopeOptionsForEnvironment:(id)arg1;
+ (id)listControllerThumbnailScope;
+ (id)funCamCarouselThumbnailScope;
+ (double)extraMagnifyingFactorForFramingMode:(id)arg1;
+ (double)widthForSunflowerRenderingType:(long long)arg1;
+ (double)widthForRenderingType:(long long)arg1 options:(unsigned long long)arg2;
+ (double)thumbnailHeightRatioForFramingMode:(id)arg1;
+ (id)thumbnailScope;
+ (id)simplePickerThumbnailScope;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5;
- (id)copyWithFramingMode:(id)arg1;
- (id)copyApplyingPoseOverride:(id)arg1;
- (id)cacheableResourceAssociatedIdentifier;
- (unsigned long long)cacheableResourceAssociatedCost;
- (id)adaptedFramingModeForObjectType:(long long)arg1;
- (id)framingModeIdentifier;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 sizeModifier:(float)arg6;
- (id)copyWithSizeModifier:(float)arg1;

@end
