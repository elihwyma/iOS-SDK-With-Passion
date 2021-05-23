/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKComposeChatController.h>

@interface CKShareSheetChatController : CKComposeChatController

{
    unsigned long long _interactionSignPost;
    _Bool _alreadySetUp;
}

@property (nonatomic) _Bool alreadySetUp;

- (void)viewDidAppear:(_Bool)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)_beginInteractionSignPost;
- (void)_endInteractionSignPost;
- (void)sendComposition:(id)arg1;
- (void)insertInitialCompositionIfNeeded;
- (_Bool)shouldDismissAfterSend;

@end
