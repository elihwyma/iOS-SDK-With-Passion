/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCaptureVideoDataOutput.h>

@class CAMCaptureEngine;

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput

{
    long long _photoEncodingBehavior;
    CAMCaptureEngine *__engine;
}

@property (weak, nonatomic, readonly) CAMCaptureEngine *_engine;
@property (nonatomic, readonly) long long photoEncodingBehavior;

- (id)initWithEngine:(id)arg1;
- (void)changeToEncodingBehavior:(long long)arg1;
- (void)changeToDirection:(long long)arg1;

@end
