/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, CIBarcodeDescriptor, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject

{
    AVMetadataMachineReadableCodeObjectInternal *_internal;
}

@property (readonly) CIBarcodeDescriptor *descriptor;
@property (readonly) NSArray *corners;
@property (readonly) NSString *stringValue;

+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)basicDescriptor;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;

@end
