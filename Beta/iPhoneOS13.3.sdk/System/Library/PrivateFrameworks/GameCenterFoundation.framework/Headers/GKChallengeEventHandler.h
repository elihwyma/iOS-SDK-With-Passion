/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKChallengeInternal;

@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;

@interface GKChallengeEventHandler : NSObject

{
    id <GKChallengeEventHandlerDelegate> _delegateWeak;
    id <GKChallengeEventHandlerUIDelegate> _uiDelegate;
    GKChallengeInternal *_pendingReceivedChallenge;
    GKChallengeInternal *_pendingCompletedChallenge;
}

@property (retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge;
@property (retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge;
@property (retain, nonatomic) id <GKChallengeEventHandlerUIDelegate> uiDelegate;
@property (nonatomic) id <GKChallengeEventHandlerDelegate> delegate;

+ (id)challengeEventHandler;

- (void)dealloc;
- (void)receivedChallengeSelected:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)challengeCompleted:(id)arg1;
- (void)showBannerForChallenge:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end
