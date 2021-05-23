/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@class NSMutableArray, NSMutableDictionary;

@protocol BWUBProcessorInputDelegate;

@interface BWUBProcessorInput : BWStillImageProcessorInput

{
    int _fusionMode;
    id <BWUBProcessorInputDelegate> _delegate;
    NSMutableArray *_frames;
    _Bool _keepFrames;
    int _receivedFrames;
    _Bool _receivedAllFrames;
    struct opaqueCMSampleBuffer *_referenceFrame;
    struct opaqueCMSampleBuffer *_errorRecoveryFrame;
    _Bool _emitErrorRecoveryFrame;
    int _adaptiveBracketingStopFrameCount;
    NSMutableDictionary *_oisRecenteringLoggingData;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer *originalImage;
@property (retain, nonatomic) id <BWUBProcessorInputDelegate> delegate;
@property (nonatomic) _Bool keepFrames;
@property (nonatomic, readonly) NSMutableDictionary *oisRecenteringLoggingData;
@property (nonatomic, readonly) int receivedFrames;
@property (nonatomic, readonly) _Bool receivedAllFrames;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *referenceFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *evMinusReferenceFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *errorRecoveryFrame;
@property (nonatomic) int fusionMode;
@property (nonatomic) _Bool emitErrorRecoveryFrame;

- (void)dealloc;
- (id)frames;
- (void)addFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopAdaptiveBracketingWithGroup:(int)arg1;
- (id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3;
- (id)adaptiveBracketingParameters;
- (void)_setReferenceFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)_setErrorRecoveryFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopAdaptiveBracketingNow;
- (void)updateAdaptiveBracketingFrameParametersIfNeededUsingFrame:(struct opaqueCMSampleBuffer *)arg1 err:(int)arg2;

@end
