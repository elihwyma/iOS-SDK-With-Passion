/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class MSConversation, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController, PKPeerPaymentRecipient;

@protocol OS_dispatch_queue;

@interface NPKPeerPaymentConversationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MSConversation *_activeConversation;
    PKPeerPaymentRecipient *_recipient;
    NPKPeerPaymentConversationContext *_conversationContext;
    NSString *_currentRecipientAddressLookup;
    PKPeerPaymentController *_currentPeerPaymentController;
}

@property (retain, nonatomic) NSString *currentRecipientAddressLookup;
@property (weak, nonatomic) PKPeerPaymentController *currentPeerPaymentController;
@property (retain) MSConversation *activeConversation;
@property (nonatomic, readonly) NSString *senderPhoneOrEmail;
@property (nonatomic, readonly) NSString *recipientPhoneOrEmail;
@property (copy, nonatomic, readonly) NSString *recipientDisplayName;
@property (nonatomic, readonly) _Bool recipientFoundInContacts;
@property (readonly) PKPeerPaymentRecipient *recipient;
@property (retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext;

+ (id)sharedInstance;

- (id)init;
- (id)_sharedPeerPaymentWebService;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (id)_newPeerPaymentController;
- (void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_displayableErrorWithError:(id)arg1;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;
- (void)lookupRecipientInformationIfNecessary;
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;

@end
