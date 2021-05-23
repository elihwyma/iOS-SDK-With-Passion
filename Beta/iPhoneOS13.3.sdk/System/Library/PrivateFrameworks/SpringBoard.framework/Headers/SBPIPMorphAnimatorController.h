/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, PGPictureInPictureViewController, SBPIPMorphAnimatorDataSource, SBViewMorphAnimator;

@interface SBPIPMorphAnimatorController : NSObject

{
    NSUUID *_uuid;
    SBViewMorphAnimator *_viewMorphAnimator;
    SBPIPMorphAnimatorDataSource *_viewMorphAnimatorDataSource;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    long long _startedSourceAnimations;
    long long _completedTargetAnimations;
}

@property (nonatomic) long long startedSourceAnimations;
@property (nonatomic) long long completedTargetAnimations;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) SBViewMorphAnimator *viewMorphAnimator;
@property (nonatomic, readonly) SBPIPMorphAnimatorDataSource *viewMorphAnimatorDataSource;
@property (weak, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)interrupt;
- (void)_terminate;
- (id)initWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)animatorWasInterrupted:(id)arg1;
- (int)targetProcessIdentifier;
- (id)scenePersistenceIdentifier;

@end
