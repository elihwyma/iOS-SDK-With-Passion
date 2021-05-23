/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class CLLocation, NSDate, NSString;

@interface CAMTimelapseState : NSObject <Swift>

{
    _Bool _allFramesWritten;
    _Bool _preferHEVC;
    unsigned short _sessionIdentifier;
    int _captureOrientation;
    float _focusLensPosition;
    NSString *_timelapseUUID;
    long long _captureDevice;
    NSDate *_startTime;
    CLLocation *_startLocation;
    NSDate *_lastFrameResponseTime;
    NSDate *_stopTime;
    long long _stopReasons;
    double _captureTimeInterval;
    long long _frameIndexStride;
    long long _nextFrameIndex;
    struct CGSize _nominalIntermediateFrameSize;
}

@property (retain, nonatomic) NSString *timelapseUUID;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) long long captureDevice;
@property (nonatomic) int captureOrientation;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) CLLocation *startLocation;
@property (retain, nonatomic) NSDate *lastFrameResponseTime;
@property (retain, nonatomic) NSDate *stopTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic) _Bool allFramesWritten;
@property (nonatomic, readonly) double captureTimeInterval;
@property (nonatomic, readonly) long long frameIndexStride;
@property (nonatomic, readonly) long long nextFrameIndex;
@property (nonatomic) float focusLensPosition;
@property (nonatomic, readonly) long long connectionMode;
@property (nonatomic) struct CGSize nominalIntermediateFrameSize;
@property (nonatomic) _Bool preferHEVC;

+ (_Bool)supportsSecureCoding;
+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fullDescription;
- (_Bool)isEqualToState:(id)arg1;
- (_Bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (_Bool)mergeSecondaryState:(id)arg1;
- (_Bool)_commonCAMTimelapseStateInitWithCoder:(id)arg1;
- (_Bool)canContinueCapture;
- (_Bool)incrementFrameIndex;
- (id)filePathForNextFrameIndex;
- (_Bool)isReadyForWritingMovie;
- (void)forceCompleted;
- (_Bool)writeToFile:(id)arg1 createDirectoryIfNeeded:(_Bool)arg2;

@end
