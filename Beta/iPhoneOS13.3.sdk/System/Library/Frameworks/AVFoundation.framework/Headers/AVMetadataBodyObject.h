/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@interface AVMetadataBodyObject : AVMetadataObject

{
    long long _bodyID;
}

@property (readonly) long long bodyID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 bodyID:(long long)arg2 time:(CDStruct_1b6d18a9)arg3 duration:(CDStruct_1b6d18a9)arg4 bounds:(struct CGRect)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4 type:(id)arg5 bodyID:(long long)arg6;

@end
