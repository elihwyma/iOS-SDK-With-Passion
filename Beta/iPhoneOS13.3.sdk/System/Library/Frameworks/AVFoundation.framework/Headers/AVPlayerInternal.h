/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioSession, AVAudioSessionMediaPlayerOnly, AVOutputContext, AVPixelBufferAttributeMediator, AVPlayerItem, AVWeakReference, NSArray, NSDictionary, NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol AVBlockScheduler, AVLoggingIdentifier, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerInternal : NSObject

{
    AVWeakReference *weakReference;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *layerInteractionQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSObject<OS_dispatch_queue> *currentItemPropertyUpdateQueue;
    NSObject<OS_dispatch_queue> *layersQ;
    struct OpaqueCMTimebase *proxyTimebase;
    _Bool logPerformanceData;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    void *IAPDCallbackToken;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    id layerVisibilityChangeToken;
    id <AVBlockScheduler> KVOChangeSerializer;
    long long status;
    NSError *error;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    NSMutableSet *items;
    NSArray *queueModifications;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVAudioSession *audioSession;
    NSDictionary *vibrationPattern;
    AVOutputContext *outputContext;
    _Bool IOwnTheFigPlayer;
    _Bool pausesAudioVisualPlaybackInBackground;
    NSMutableArray *handlersToCallWhenReadyToPlay;
    _Bool shouldReduceResourceUsage;
    long long resourceConservationLevelWhilePaused;
    NSString *playerRole;
    _Bool usesDedicatedNotificationQueueForMediaServices;
    struct CGSize dimensionsOfReservedVideoMemory;
    NSString *externalPlaybackVideoGravity;
    long long actionAtItemEnd;
    float volume;
    float userVolume;
    float minRateForAudioPlayback;
    float maxRateForAudioPlayback;
    _Bool autoSwitchStreamVariants;
    _Bool preparesItemsForPlaybackAsynchronously;
    _Bool allowsOutOfBandTextTrackRendering;
    _Bool muted;
    _Bool closedCaptionDisplayEnabled;
    _Bool appliesMediaSelectionCriteriaAutomatically;
    _Bool dynamicallyChoosesInitialVariant;
    _Bool limitsBandwidthForCellularAccess;
    _Bool usesAudioOnlyModeForExternalPlayback;
    _Bool allowsPixelBufferPoolSharing;
    _Bool disallowsAMRAudio;
    _Bool disallowsHardwareAcceleratedVideoDecoder;
    _Bool layerDestinationIsTVOut;
    _Bool preventsDisplaySleepDuringVideoPlayback;
    _Bool disallowsVideoLayerDisplayCompositing;
    _Bool allowsExternalPlayback;
    _Bool usesExternalPlaybackWhileExternalScreenIsActive;
    NSString *captionPipelineStrategy;
    NSString *audioOutputDeviceUniqueID;
    NSString *clientName;
    NSString *multichannelAudioStrategy;
    long long clientPriority;
    _Bool PIPModePossible;
    _Bool isDisplayingClosedCaptions;
    _Bool externalPlaybackActive;
    _Bool airPlayVideoActive;
    _Bool isConnectedToPhysicalSecondScreen;
    _Bool outputObscuredDueToInsufficientExternalProtection;
    long long externalProtectionStatus;
    NSString *ancillaryPerformanceInformationForDisplay;
    float rate;
    _Bool automaticallyWaitsToMinimizeStalling;
    _Bool usesLegacyAutomaticWaitingBehavior;
    long long timeControlStatus;
    NSString *reasonForWaitingToPlay;
    struct CGSize currentItemPresentationSize;
    _Bool currentItemNonForcedSubtitlesEnabled;
    unsigned long long preferredVideoDecoderGPURegistryID;
    _Bool disallowsAutoPauseOnRouteRemovalIfNoAudio;
    _Bool hostApplicationInForeground;
    _Bool preservesAudioSessionSampleRate;
    NSMutableArray *videoLayers;
    NSMutableArray *subtitleLayers;
    NSMutableArray *closedCaptionLayers;
    NSHashTable *avPlayerLayers;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    CDUnknownBlockType prerollCompletionHandler;
    id currentItemSuppressesVideoLayersNotificationToken;
    id currentItemPreferredPixelBufferAttributesNotificationToken;
    struct OpaqueFigPlayer *figPlayer;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    _Bool needsToCreateFigPlayer;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    NSArray *itemsInFigPlayQueue;
    NSArray *expectedAssetTypes;
    _Bool reevaluateBackgroundPlayback;
    _Bool hadAssociatedOnscreenPlayerLayerWhenSuspended;
    _Bool suspensionExpected;
    struct OpaqueCMClock *figMasterClock;
    NSString *captionRenderingStrategy;
    NSArray *displaysUsedForPlayback;
    id <AVLoggingIdentifier> loggingIdentifier;
}

@end
