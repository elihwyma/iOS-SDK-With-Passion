/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatController.h>

@class CKNavbarCanvasViewController;

__attribute__((visibility("hidden")))
@interface CKBusinessChatController : CKChatController

{
    CKNavbarCanvasViewController *_navbarCanvasViewController;
}

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)_addressBookChanged:(id)arg1;
- (void)setupBizNavBarIfNecessary;
- (void)cleanUpBizNavBarIfNecessary;

@end
