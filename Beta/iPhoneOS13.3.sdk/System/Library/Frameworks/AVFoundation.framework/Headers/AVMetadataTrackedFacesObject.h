/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject

{
    AVMetadataTrackedFacesObjectInternal *_trackedFacesObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)trackedFacesWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;

@end
