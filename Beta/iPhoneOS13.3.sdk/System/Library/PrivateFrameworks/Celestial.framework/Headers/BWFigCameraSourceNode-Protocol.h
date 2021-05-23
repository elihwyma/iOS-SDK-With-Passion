/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary;

@protocol BWFigCameraSourceNode <Swift>

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) BWNodeOutput *detectedObjectsOutput;
@property (copy, nonatomic) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) _Bool videoCaptureOutputPixelBufferAttachmentModificationAllowed;

- (unsigned short)colorInfoForOutput: /* Error: Ran out of types for this method. */;

@end
