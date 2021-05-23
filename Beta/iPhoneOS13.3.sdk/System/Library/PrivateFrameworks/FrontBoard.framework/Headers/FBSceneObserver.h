/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSString;

@protocol FBSceneDelegate, FBSceneObserver;

@interface FBSceneObserver : NSObject <Swift>

{
    id <FBSceneObserver> _observer;
    unsigned long long _observerAddress;
    Class _observerClass;
    _Bool _isDelegate;
    struct {
        _Bool contentStateDidChange;
        _Bool updatePrepared;
        _Bool updateApplied;
        _Bool updateCompleted;
        _Bool clientSettingsUpdated;
        _Bool didInvalidate;
    } _observerFlags;
    struct {
        _Bool clientSettingsUpdated;
        _Bool didReceiveActions;
    } _delegateFlags;
}

@property (weak, nonatomic, readonly) id <FBSceneObserver> observer;
@property (weak, nonatomic, readonly) id <FBSceneDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (id)_initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (_Bool)isDelegate;

@end
