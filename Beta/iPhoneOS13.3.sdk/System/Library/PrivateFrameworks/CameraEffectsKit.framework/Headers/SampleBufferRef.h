/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, JTFaceAnchor, PVImageBuffer;

@interface SampleBufferRef : NSObject

{
    struct opaqueCMSampleBuffer *_s;
    ARFrame *_arFrame;
    JTFaceAnchor *_faceAnchor;
    PVImageBuffer *_backingPVImage;
}

@property (retain) PVImageBuffer *backingPVImage;

- (void)dealloc;
- (CDStruct_1b6d18a9)presentationTime;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)sampleBuffer;
- (id)arFrame;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 arFrame:(id)arg2;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 faceAnchor:(id)arg2;
- (id)faceAnchor;

@end
