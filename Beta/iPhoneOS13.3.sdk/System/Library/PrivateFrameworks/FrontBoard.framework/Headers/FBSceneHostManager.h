/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBOrderedRequesters, FBScene, FBSceneHostWrapperView, FBSceneLayerHostContainerView, FBSceneLayerManager, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIColor;

@protocol FBSceneHostManagerDelegate;

@interface FBSceneHostManager : NSObject <Swift>

{
    FBSceneLayerManager *_layerManager;
    FBScene *_scene;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    unsigned long long _defaultHostedLayerTypes;
    unsigned long long _defaultRenderingMode;
    NSString *_defaultMinificationFilterName;
    FBSceneLayerHostContainerView *_hostView;
    FBSceneHostWrapperView *_activeWrapperView;
    _Bool _invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostWrapperViewsByRequester;
    NSMutableSet *_disableHostingAssertions;
    NSHashTable *_observers;
    id <FBSceneHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableHostingForRequester:1;
    } _flags;
    _Bool _defaultClippingDisabled;
    struct CGAffineTransform _defaultHostViewTransform;
}

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <FBSceneHostManagerDelegate> delegate;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic) _Bool defaultClippingDisabled;
@property (nonatomic) struct CGAffineTransform defaultHostViewTransform;
@property (copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
@property (copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long defaultHostedLayerTypes;
@property (nonatomic) unsigned long long defaultRenderingMode;
@property (copy, nonatomic) NSString *defaultMinificationFilterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_wrapperViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_updateActiveHostRequester;
- (void)disableHostingForRequester:(id)arg1;
- (void)_callOutToObservers:(CDUnknownBlockType)arg1;
- (id)_hostViewForRequester:(id)arg1;
- (id)snapshotContextForRequester:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (id)_activeHostRequester;
- (void)_activateRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(_Bool)arg2;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedLayers:(id)arg2 opaque:(_Bool)arg3;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (void)orderRequesterFront:(id)arg1;
- (void)setLayer:(id)arg1 alpha:(double)arg2 forRequester:(id)arg3;
- (id)disableHostingForReason:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotViewForSnapshot:(id)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;

@end
