/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation

{
    _Bool _noAvailableServices;
    IMService *_previousSendingService;
    IMService *_composeSendingService;
}

@property (weak, nonatomic) IMService *composeSendingService;
@property (nonatomic) _Bool noAvailableServices;
@property (weak, nonatomic) IMService *previousSendingService;

- (id)uniqueIdentifier;
- (id)sendingService;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)deviceIndependentID;

@end
