/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@protocol SBViewControllerContextTransitioning <Swift>

- (unsigned short)initiallyInteractive;
- (unsigned short)isTransitioning;
- (unsigned short)supportsCancelling;
- (unsigned short)supportsRestarting;
- (unsigned short)restartTransition;
- (unsigned short)wasPreviousPhaseInteractive;

@end
