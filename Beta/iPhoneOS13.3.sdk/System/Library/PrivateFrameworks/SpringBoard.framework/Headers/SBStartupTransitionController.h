/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSTransaction, BSTransactionBlockObserver, NSSet, NSString, SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory;

@protocol SBStartupTransition;

@interface SBStartupTransitionController : NSObject <Swift>

{
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionContextPersistence *_transitionContextPersistence;
    SBStartupTransitionFactory *_transitionFactory;
    BSTransaction<SBStartupTransition> *_transition;
    BSTransactionBlockObserver *_transitionObserver;
    _Bool _ranOnce;
    NSSet *_renderOverlayDismissActions;
}

@property (retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory;
@property (retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence;
@property (nonatomic, readonly) BSTransaction<SBStartupTransition> *startupTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
- (id)initWithInitialRestartState:(id)arg1;
- (void)_saveContextFromTransitionContext:(id)arg1;

@end
