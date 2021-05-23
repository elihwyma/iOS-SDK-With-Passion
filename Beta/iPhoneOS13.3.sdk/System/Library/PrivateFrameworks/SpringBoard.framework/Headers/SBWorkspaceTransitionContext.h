/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSAnimationSettings, NSMutableArray, NSMutableDictionary, NSSet, NSString, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransitionContext : NSObject <Swift>

{
    SBWorkspaceTransitionRequest *_request;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    _Bool _animationDisabled;
    BSAnimationSettings *_animationSettings;
    NSMutableArray *_finalizeBlocks;
    _Bool _finalized;
}

@property (weak, nonatomic) SBWorkspaceTransitionRequest *request;
@property (copy, nonatomic, readonly) NSSet *entities;
@property (copy, nonatomic, readonly) NSSet *previousEntities;
@property (nonatomic, readonly, getter=isFinalized) _Bool finalized;
@property (nonatomic) _Bool animationDisabled;
@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)context;

- (id)init;
- (void)finalize;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)entityForKey:(id)arg1;
- (id)entityForIdentifier:(id)arg1;
- (void)addFinalizeBlock:(CDUnknownBlockType)arg1;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setEntity:(id)arg1 forKey:(id)arg2;
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;
- (id)previousEntityForKey:(id)arg1;
- (id)previousEntityForIdentifier:(id)arg1;

@end
