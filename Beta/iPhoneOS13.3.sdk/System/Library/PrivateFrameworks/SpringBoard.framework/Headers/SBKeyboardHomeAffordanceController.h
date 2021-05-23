/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString, SBHomeGrabberRotationView, SBKeyboardHomeAffordanceAssertion;

@interface SBKeyboardHomeAffordanceController : NSObject <Swift>

{
    NSHashTable *_assertions;
    SBHomeGrabberRotationView *_homeGrabberView;
    _Bool _isHomeGrabberContainingViewAlwaysPortrait;
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)_updateHomeAffordance;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)arg1;
- (void)_updateTopMostAssertion;
- (void)_getHomeGrabberContainingView:(id *)arg1 isAlwaysPortrait:(_Bool *)arg2;
- (void)registerAssertion:(id)arg1;
- (void)unregisterAssertion:(id)arg1;
- (void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg1;

@end
