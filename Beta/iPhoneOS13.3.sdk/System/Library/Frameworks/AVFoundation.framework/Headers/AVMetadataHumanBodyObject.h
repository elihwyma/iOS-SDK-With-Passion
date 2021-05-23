/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataBodyObject.h>

@interface AVMetadataHumanBodyObject : AVMetadataBodyObject

+ (id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBodyID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;
- (id)initWithBodyID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;

@end
