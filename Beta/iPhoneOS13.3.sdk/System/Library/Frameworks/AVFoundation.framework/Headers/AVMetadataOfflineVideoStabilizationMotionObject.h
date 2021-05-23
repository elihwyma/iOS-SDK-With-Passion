/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject

{
    AVMetadataOfflineVideoStabilizationMotionObjectInternal *_offlineVISMotionObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)offlineVideoStabilizationMotionObjectWithTime:(CDStruct_1b6d18a9)arg1 motionDictionary:(id)arg2 input:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 motionDictionary:(id)arg2 input:(id)arg3;

@end
