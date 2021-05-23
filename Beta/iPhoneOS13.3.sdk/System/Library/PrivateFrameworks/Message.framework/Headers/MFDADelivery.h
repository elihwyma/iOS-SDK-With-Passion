/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailDelivery.h>

@class DAMailAccount, MFMessageLibrary, NSString;

@interface MFDADelivery : MFMailDelivery

{
    DAMailAccount *_DAMailAccount;
    MFMessageLibrary *_library;
    NSString *_folderID;
    NSString *_accountID;
    NSString *_originalMessageID;
    NSString *_originalLongID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)setDAMailAccount:(id)arg1;
- (id)newMessageWriter;
- (void)_updateBasedOnOriginalMessage:(id)arg1;
- (id)deliverSynchronously;

@end
