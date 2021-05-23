/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMomentCaptureMovie, AVMomentCaptureMovieRecordingResolvedSettings, AVMomentCaptureMovieRecordingSettings, AVMomentCaptureSettings, AVWeakReferencingDelegateStorage;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieRequest : NSObject

{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVMomentCaptureSettings *_momentCaptureSettings;
    AVMomentCaptureMovieRecordingSettings *_unresolvedSettings;
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    unsigned int _firedCallbackFlags;
    AVMomentCaptureMovie *movie;
    AVMomentCaptureMovie *spatialOverCaptureMovie;
    unsigned long long _expectedMovieCount;
    AVMomentCaptureMovie *_movie;
    AVMomentCaptureMovie *_spatialOverCaptureMovie;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) AVMomentCaptureSettings *momentCaptureSettings;
@property (readonly) AVMomentCaptureMovieRecordingSettings *unresolvedSettings;
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (nonatomic, readonly) unsigned long long expectedMovieCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (retain, nonatomic) AVMomentCaptureMovie *movie;
@property (retain, nonatomic) AVMomentCaptureMovie *spatialOverCaptureMovie;

+ (id)requestWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;

- (void)dealloc;
- (id)_initWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;

@end
