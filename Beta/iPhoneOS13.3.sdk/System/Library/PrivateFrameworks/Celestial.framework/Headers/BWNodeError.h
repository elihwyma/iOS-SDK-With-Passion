/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWStillImageCaptureSettings, FigCaptureRecordingSettings, FigCaptureStillImageSettings, NSString;

@interface BWNodeError : NSObject

{
    long long _uniqueID;
    int _errorCode;
    NSString *_sourceNodeDescription;
    FigCaptureStillImageSettings *_requestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_resolvedStillImageCaptureSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}

@property (readonly) int errorCode;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;

+ (id)newError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4;
+ (id)newError:(int)arg1 sourceNode:(id)arg2;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;

- (void)dealloc;
- (unsigned long long)hash;
- (id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5;

@end
