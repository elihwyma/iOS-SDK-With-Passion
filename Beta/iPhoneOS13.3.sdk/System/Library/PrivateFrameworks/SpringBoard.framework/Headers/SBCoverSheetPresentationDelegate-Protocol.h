/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBCoverSheetPresentationDelegate <Swift>

- (unsigned short)lockScreenViewControllerWillPresent;
- (unsigned short)lockScreenViewControllerDidPresent;
- (unsigned short)lockScreenViewControllerWillDismiss;
- (unsigned short)lockScreenViewControllerDidDismiss;
- (unsigned short)lockScreenViewControllerRequestsUnlock;

@end
