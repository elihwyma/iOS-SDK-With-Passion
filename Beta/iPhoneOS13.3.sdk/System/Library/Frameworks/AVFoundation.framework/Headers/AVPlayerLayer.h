/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <QuartzCore/CALayer.h>

@class AVPlayer, AVPlayerLayerInternal, NSDictionary, NSString;

@interface AVPlayerLayer : CALayer

{
    AVPlayerLayerInternal *_playerLayer;
}

@property (retain, nonatomic) AVPlayer *player;
@property (copy) NSString *videoGravity;
@property (nonatomic, readonly, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (nonatomic, readonly) struct CGRect videoRect;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)playerLayerWithPlayer:(id)arg1;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)makeClosedCaptionLayer;
+ (void)_swapSublayersBetweenPlayerLayer:(id)arg1 andPlayerLayer:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)arg1;
- (id)_videoLayer;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (void)setContentsScale:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)_maskLayer;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)layoutSublayers;
- (void)setSublayers:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setPIPModeEnabled:(_Bool)arg1;
- (id)videoPerformanceMetrics;
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (_Bool)isForScrubbingOnly;
- (void)setForScrubbingOnly:(_Bool)arg1;
- (_Bool)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:(_Bool)arg1;
- (_Bool)_preventsChangesToSublayerHierarchy;
- (_Bool)isLegibleDisplayEnabled;
- (_Bool)isPIPModeEnabled;
- (id)placeholderContentLayerDuringPIPMode;
- (void)hasEnqueuedVideoFrameChanged:(id)arg1;
- (void)_windowSceneDidEnterBackground:(id)arg1;
- (void)_getMaskLayer:(id *)arg1 videoLayer:(id *)arg2 subtitleLayer:(id *)arg3 closedCaptionLayer:(id *)arg4;
- (struct CGSize)_playerCurrentItemPresentationSize;
- (_Bool)isLanczosFilterDownscalingEnabled;
- (void)_notifyPlayerOfDisplaySize;
- (id)_closedCaptionLayer;
- (void)_addSublayerTransformAnimationToLayer:(id)arg1 fromTransform:(struct CATransform3D)arg2 usingAnimation:(id)arg3 gravity:(id)arg4 presentationSize:(struct CGSize)arg5 forKey:(id)arg6;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(CDUnknownBlockType)arg2;
- (void)_addAnimationsForPIPPlaceholderLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForMaskLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3 forKey:(id)arg4;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 forKey:(id)arg3;
- (void)_stopObservingPlayer:(id)arg1;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:(_Bool)arg1;
- (_Bool)_willManageSublayersAsSwappedLayers;
- (id)_subtitleLayer;
- (void)_updateReadyForDisplayForPlayerCurrentItem;
- (id)_associatedRemoteModeLayer;
- (long long)_activeMode;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_startObservingPlayer:(id)arg1;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_updateIsPartOfForegroundScene;
- (id)_sublayersForPIP;
- (void)_setSublayersForPIP:(id)arg1;
- (void)_setSublayersPreventChangesToSublayerHierarchy:(_Bool)arg1;
- (void)_setPreventsChangesToSublayerHierarchy:(_Bool)arg1;
- (void)_setWillManageSublayersAsSwappedLayers:(_Bool)arg1;
- (void)_mergeClientLayersIntoMaskLayer:(id)arg1;
- (void)_restoreClientLayers:(id)arg1 intoMaskLayer:(id)arg2;
- (void)stopRedirectingVideoToLayer:(id)arg1;
- (void)_enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)_enterSecondScreenModeRedirectingVideoToLayer:(id)arg1;
- (void)_leavePIPModeForLayer:(id)arg1;
- (void)_leaveSecondScreenModeForLayer:(id)arg1;
- (_Bool)_isConnectedToSecondScreen;
- (void)_associateWithLayer:(id)arg1 forMode:(long long)arg2;
- (void)_setIsConnectedToSecondScreen:(_Bool)arg1;
- (void)_disassociateWithLayerForMode:(long long)arg1;
- (void)_forceLayout;
- (_Bool)_currentWindowSceneIsForeground;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (struct CGSize)_displaySize;
- (void)setLanczosFilterDownscalingEnabled:(_Bool)arg1;
- (long long)lanczosFilterDownscaleFactor;
- (void)setLanczosFilterDownscaleFactor:(long long)arg1;
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;
- (void)setLegibleDisplayEnabled:(_Bool)arg1;
- (void)startRedirectingVideoToLayer:(id)arg1 forMode:(long long)arg2;
- (void)enterPIPModeRedirectingVideoToLayer:(id)arg1;
- (void)leavePIPMode;
- (void)setPlaceholderContentLayerDuringPIPMode:(id)arg1;
- (_Bool)_isPartOfForegroundScene;

@end
