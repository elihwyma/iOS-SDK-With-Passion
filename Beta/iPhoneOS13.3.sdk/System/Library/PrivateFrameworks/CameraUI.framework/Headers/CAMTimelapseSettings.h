/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMTimelapseSettings : NSObject

{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

@property (nonatomic, readonly) double initialCaptureTimeInterval;
@property (nonatomic, readonly) double maxOutputFPS;
@property (nonatomic, readonly) double maxOutputLength;
@property (nonatomic, readonly) long long maxOutputFrames;
@property (nonatomic, readonly) long long maxMovieWriteAttempts;
@property (nonatomic, readonly) long long maxFailedStateReadAttempts;

+ (id)sharedInstance;

- (id)init;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(_Bool)arg3;
- (id)_outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2;
- (long long)_averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(_Bool)arg3;
- (long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(_Bool)arg3;
- (double)outputFPSForFrameCount:(long long)arg1;
- (id)outputSettingsForWidth:(long long)arg1 height:(long long)arg2 videoFormatDescription:(struct opaqueCMFormatDescription *)arg3 framesPerSecond:(long long)arg4 frameCount:(long long)arg5 useHEVC:(_Bool)arg6;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1;

@end
