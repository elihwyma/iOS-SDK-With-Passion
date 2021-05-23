/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransaction.h>

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction

{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    long long _transitionStyle;
    long long _inferredTransitionStyle;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) SBWorkspaceEntity *entityToPiP;
@property (nonatomic) long long transitionStyle;

+ (_Bool)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 entityFoundBlock:(CDUnknownBlockType)arg2;
+ (_Bool)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1;
+ (_Bool)_shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 transientOverlayEntityFoundBlock:(CDUnknownBlockType)arg2 appEntityFoundBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isSystemGesture:(id)arg1;
+ (long long)transitionStyleForProcessIdentifier:(int)arg1 entityToPiP:(id)arg2 withTransitionContext:(id)arg3 request:(id)arg4;

- (void)_begin;
- (_Bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (long long)_transitionStyle;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 includeActiveAppEntity:(_Bool)arg2;

@end
