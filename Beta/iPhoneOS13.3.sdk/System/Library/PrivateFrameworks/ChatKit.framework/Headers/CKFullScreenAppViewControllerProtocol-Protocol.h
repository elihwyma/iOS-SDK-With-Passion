/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@class UIViewController;

@protocol CKBrowserViewControllerProtocol, CKFullScreenAppViewControllerDelegate;

@protocol CKFullScreenAppViewControllerProtocol <Swift>

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController;
@property (weak, nonatomic) id <CKFullScreenAppViewControllerDelegate> delegate;

- (unsigned short)initWithConversation:plugin: /* Error: Ran out of types for this method. */;
- (unsigned short)animateBrowserViewFromSourceRect:interactive:grabberView:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)animateBrowserViewToTargetRect:grabberView:completion: /* Error: Ran out of types for this method. */;

@end
