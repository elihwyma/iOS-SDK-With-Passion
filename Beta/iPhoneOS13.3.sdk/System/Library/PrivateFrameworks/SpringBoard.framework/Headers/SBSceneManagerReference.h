/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayIdentity, NSMutableSet, NSString, SBSceneManager;

@protocol SBSceneManagerReferenceDelegate;

@interface SBSceneManagerReference : NSObject

{
    FBSDisplayIdentity *_displayIdentity;
    id <SBSceneManagerReferenceDelegate> _delegate;
    SBSceneManager *_manager;
    SBSceneManager *_weak_manager;
    _Bool _managerWasValid;
    _Bool _displayIsConnected;
    NSMutableSet *_retainingScenes;
    _Bool _invalidated;
}

@property (retain, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)manager;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (void)setManager:(id)arg1;
- (_Bool)isDefunct;
- (void)releaseForScene:(id)arg1;
- (void)retainForScene:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (_Bool)isRetaining;
- (void)_autoreleaseManager:(id)arg1;
- (void)_updateRetainWithBlock:(CDUnknownBlockType)arg1;
- (void)setDisplayIsConnected:(_Bool)arg1;

@end
