/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class ARFaceAnchor, ARFrame, PVFrameSet;

@interface CFXFrame : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    PVFrameSet *_pvFrameSet;
    ARFrame *_arFrame;
    ARFaceAnchor *_arFaceAnchor;
    CDStruct_1b6d18a9 _latency;
    CDStruct_1b6d18a9 _timestamp;
    CDStruct_1b6d18a9 _requestTime;
}

@property (retain, nonatomic) PVFrameSet *pvFrameSet;
@property (retain, nonatomic) ARFrame *arFrame;
@property (retain, nonatomic) ARFaceAnchor *arFaceAnchor;
@property (nonatomic) CDStruct_1b6d18a9 latency;
@property (nonatomic) struct __CVBuffer *pixelBuffer;
@property (nonatomic) CDStruct_1b6d18a9 timestamp;
@property (nonatomic) CDStruct_1b6d18a9 requestTime;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 faceAnchor:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
- (id)initWithFrameSet:(id)arg1;
- (_Bool)isEqualToFrame:(id)arg1;
- (id)initWithARFrame:(id)arg1;

@end
