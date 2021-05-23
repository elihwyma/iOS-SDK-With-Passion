/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString, NSURL, SVTimeline;

@protocol SVVideoMetadata, SXAnalyticsReporting;

@interface SXVideoProvider : NSObject <Swift>

{
    NSURL *_URL;
    id <SXAnalyticsReporting> _analyticsReporter;
    id <SVVideoMetadata> _metadata;
    SVTimeline *_timeline;
    double _pausedAtTime;
    NSString *_mediaIdentifier;
    unsigned long long _playMethod;
}

@property (weak, nonatomic) id <SVVideoMetadata> metadata;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic) double pausedAtTime;
@property (nonatomic, readonly) NSString *mediaIdentifier;
@property (nonatomic) unsigned long long playMethod;
@property (nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)configureTimelineForQuartileReporting;
- (void)playbackPausedAtTime:(double)arg1;
- (void)playbackResumedAtTime:(double)arg1;
- (_Bool)supportsQuartileReporting;
- (void)playbackInitiatedWithButtonTapped:(_Bool)arg1;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;

@end
