/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@interface AVMetadataSalientObject : AVMetadataObject

{
    long long _objectID;
}

@property (readonly) long long objectID;

+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initWithObjectID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;

@end
