/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray, NSString, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <Swift>

{
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) _Bool statusBarHidden;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long statusBarOrientation;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic, readonly) NSString *statusBarSceneIdentifier;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *statusBarControllingSceneHandle;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)_statusBarStyle;
- (id)statusBarPartStyles;
- (id)_statusBarPartStyles;
- (double)_statusBarAlpha;
- (id)_allObservers;
- (id)_observerRecords;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (long long)statusBarStyleForPartWithIdentifier:(id)arg1;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(_Bool)arg2;
- (_Bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_suppressInheritedPartStyles;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_fallbackInterfaceOrientation;
- (void)addStatusBarObserver:(id)arg1;
- (void)removeStatusBarObserver:(id)arg1;

@end
