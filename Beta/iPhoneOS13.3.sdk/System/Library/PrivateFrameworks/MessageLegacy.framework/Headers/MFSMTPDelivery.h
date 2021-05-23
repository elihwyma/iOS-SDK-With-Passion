/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFMailDelivery.h>

@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery

{
    MFSMTPConnection *_connection;
}

- (void)dealloc;
- (void)setAccount:(id)arg1;
- (Class)deliveryClass;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (void)_openConnection;

@end
