/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@protocol SBRootFolderPageStateTransitioning <Swift>

@property (nonatomic, readonly, getter=isTransitioningPageState) _Bool transitioningPageState;
@property (nonatomic, readonly) long long destinationPageState;

- (unsigned short)performPageStateTransitionToState:reason:animated:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canTransitionPageStateToState: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPageStateTransitionToState:reason:animated:interactive: /* Error: Ran out of types for this method. */;

@end
