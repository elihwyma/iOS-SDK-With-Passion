/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@class NSData;

@interface AVMetadataSaliencyHeatMap : AVMetadataObject

{
    long long _bytesPerRow;
    long long _width;
    long long _height;
    NSData *_heatMap;
}

@property (readonly) long long bytesPerRow;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) NSData *heatMap;

+ (id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;
- (id)initWithHeatMap:(id)arg1 width:(long long)arg2 height:(long long)arg3 bytesPerRow:(long long)arg4 time:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6 bounds:(struct CGRect)arg7 optionalInfoDict:(id)arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10;

@end
