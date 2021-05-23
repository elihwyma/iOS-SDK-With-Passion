/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKChatInputControllerDelegate <Swift>

- (unsigned short)chatInputSentComposition: /* Error: Ran out of types for this method. */;
- (unsigned short)viewControllerForChatInputModalPresentation;
- (unsigned short)viewForDragAndChatInputDropTarget;
- (unsigned short)chatInputControllerRequestInputViewFocusFromFullscreen: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSticker: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSticker:withDragTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)dragControllerTranscriptDelegate;
- (unsigned short)keyboardIsVisibleForChatInputController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputWillUpdateInputViewShowingBrowser;
- (unsigned short)chatInputDidUpdateInputViewShowingBrowser:entryFieldCollapsed:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputController:presentShelfModal:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputDidUpdateWithNewInputViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalUserIsComposing:withPluginBundleID:typingIndicatorData: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputDidSelectPhotoPicker;
- (unsigned short)chatInputWillChangeHeightForCompactPresentation: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputDidChangeSize;
- (unsigned short)chatInputControllerDidShowHandwriting: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillHideHandwriting: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillPresentModalBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidPresentModalBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillDismissModalBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidDismissModalBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillTransitionExpanded: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidTransitionExpanded: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillTransitionCollapsed: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidTransitionCollapsed: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidDismissCompactBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerWillDismissCompactBrowserViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)sendCurrentLocation;
- (unsigned short)chatInputControllerWillSelectFunCamera: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerDidSelectFunCamera: /* Error: Ran out of types for this method. */;
- (unsigned short)chatInputControllerShouldShowHandwriting: /* Error: Ran out of types for this method. */;

@end
