/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBTetheredSwitcherContentViewControlling;

@protocol SBTetheredSwitcherContentViewControlling <Swift>

@property (nonatomic, readonly) id <SBTetheredSwitcherContentViewControlling> tetheredViewController;

- (unsigned short)contentSize;
- (unsigned short)isScrolling;
- (unsigned short)numberOfAppLayouts;
- (unsigned short)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (unsigned short)setTetheredContentView: /* Error: Ran out of types for this method. */;
- (unsigned short)tetheredViewController:didPerformTransitionWithMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setTetheredScrollViewContentOffset:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToReopenClosedWindowsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasItemContainerAtLocationInContentView: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTetheringWithViewController:asTetheree: /* Error: Ran out of types for this method. */;
- (unsigned short)endTetheringWithViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAndHandleTetheredRemovalEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)borrowScrollViewPanGestureRecognizer;
- (unsigned short)returnScrollViewPanGestureRecognizer: /* Error: Ran out of types for this method. */;

@end
