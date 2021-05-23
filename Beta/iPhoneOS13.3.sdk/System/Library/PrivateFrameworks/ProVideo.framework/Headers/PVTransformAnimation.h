/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PVTransformAnimation : NSObject

{
    struct PVTransformAnimationInfo *_liveTransform;
    NSArray *_animationData;
    CDStruct_e83c9415 _presentationTimeRange;
}

@property (nonatomic, readonly) NSArray *animationData;
@property (nonatomic) CDStruct_e83c9415 presentationTimeRange;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnimation:(id)arg1;
- (struct PVTransformAnimationInfo)transformInfoAtTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithLiveTransform:(struct PVTransformAnimationInfo *)arg1;
- (void)_commonInit:(id)arg1 liveTransform:(struct PVTransformAnimationInfo *)arg2;
- (id)initWithAnimation:(id)arg1 simplify:(_Bool)arg2 tolerance:(double)arg3 smoothness:(unsigned int)arg4;
- (id)animationInfoFromData:(id)arg1;
- (id)dataFromAnimationInfo:(id)arg1;
- (struct PVTransformAnimationInfo)transformInfoAtLocalTime:(CDStruct_1b6d18a9)arg1;

@end
