/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBAlertItemPresenter <Swift>

- (unsigned short)canPresentMultipleAlertItemsSimultaneously;
- (unsigned short)presentAlertItem:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissAlertItem:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentsAlertItemsModally;

@end
