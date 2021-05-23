/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, ARRenderStats, MISSING_TYPE, NSArray;

@protocol MTLSharedEvent;

@interface ARPresentationFrame : NSObject

{
    double _timestamp;
    unsigned long long _frameNumber;
    unsigned long long _waitNumber;
    id <MTLSharedEvent> _applicationEvent;
    id <MTLSharedEvent> _compositorEvent;
    NSArray *_presentationTargets;
    unsigned long long _waitFrameNumber;
    ARFrame *_frame;
    ARRenderStats *_frameStatsRender;
    MISSING_TYPE *_depthHints;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long frameNumber;
@property (nonatomic) unsigned long long waitFrameNumber;
@property (nonatomic) unsigned long long waitNumber;
@property (retain, nonatomic) ARFrame *frame;
@property (retain, nonatomic) ARRenderStats *frameStatsRender;
@property (nonatomic) CDStruct_14d5dc5e transform;
@property (nonatomic) MISSING_TYPE *depthHints;
@property (nonatomic, readonly) id <MTLSharedEvent> applicationEvent;
@property (nonatomic, readonly) id <MTLSharedEvent> compositorEvent;
@property (nonatomic, readonly) NSArray *presentationTargets;

- (id)description;
- (id)initWithPresentationTargets:(id)arg1 compositorEvent:(id)arg2 applicationEvent:(id)arg3;
- (void)waitBeforeStartingRender:(id)arg1;
- (void)signalAfterFinishingRender:(id)arg1;
- (id)presentationTargetForEyeLocation:(long long)arg1;

@end
