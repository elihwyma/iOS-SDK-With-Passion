/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject

{
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}

@property (nonatomic, readonly) int trackID;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTrackID:(int)arg1;
- (id)dictionaryRepresentationWithTimeRange:(CDStruct_e83c9415)arg1;
- (void)_setValuesFromDictionary:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)_setTransformRamps:(id)arg1;
- (void)_setOpacityRamps:(id)arg1;
- (void)_setCropRectangleRamps:(id)arg1;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (void)setTransform:(struct CGAffineTransform)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setOpacity:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setCropRectangle:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)getTransformRampForTime:(CDStruct_1b6d18a9)arg1 startTransform:(struct CGAffineTransform *)arg2 endTransform:(struct CGAffineTransform *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (_Bool)getOpacityRampForTime:(CDStruct_1b6d18a9)arg1 startOpacity:(float *)arg2 endOpacity:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (_Bool)getCropRectangleRampForTime:(CDStruct_1b6d18a9)arg1 startCropRectangle:(struct CGRect *)arg2 endCropRectangle:(struct CGRect *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;

@end
