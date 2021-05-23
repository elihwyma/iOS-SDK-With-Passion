/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup

{
    AVTimedMetadataGroupInternal *_priv;
}

@property (nonatomic, readonly, getter=_timedMetadataGroupInternal) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (copy, nonatomic, readonly) NSArray *items;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (const struct opaqueCMFormatDescription *)copyFormatDescription;

@end
