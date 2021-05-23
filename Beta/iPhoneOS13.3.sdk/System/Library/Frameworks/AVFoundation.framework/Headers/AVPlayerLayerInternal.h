/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVKeyPathDependencyManager, AVNetworkPlaybackPerfHUDLayer, AVPlayer, AVPlayerLayer, CALayer, FigBaseCALayer, FigSubtitleCALayer, FigVideoContainerLayer, NSDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerLayerInternal : NSObject

{
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool isPresentationLayer;
    struct OpaqueFigSimpleMutex *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    id playerItemHasEnqueuedVideoFrameListener;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    _Bool lanczosDownscalingEnabled;
    long long lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    _Bool isLegibleDisplayEnabled;
    _Bool isForScrubbingOnly;
    AVPlayerLayer *associatedRemoteModeLayer;
    _Bool willManageSublayersAsSwappedLayers;
    long long activeMode;
    _Bool isPartOfForegroundScene;
    _Bool isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    NSSet *KVOInvokers;
    struct CGSize latestAppliedPresentationSize;
    _Bool preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    _Bool isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
    _Bool isConnectedToSecondScreen;
}

@end
