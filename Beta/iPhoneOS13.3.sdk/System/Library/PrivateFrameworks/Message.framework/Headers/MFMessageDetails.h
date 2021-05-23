/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailboxUid, MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject

{
    MFMessageLibrary *library;
    long long libraryID;
    unsigned long long messageFlags;
    unsigned int uid;
    long long mailboxID;
    long long conversationHash;
    long long messageIDHash;
    unsigned int dateReceived;
    unsigned int dateSent;
    NSString *externalID;
}

@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) unsigned long long messageFlags;
@property (weak, nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
@property (nonatomic, readonly) NSString *externalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long conversationHash;
@property (nonatomic, readonly) long long mailboxID;
@property (nonatomic, readonly) long long messageIDHash;
@property (nonatomic, readonly) _Bool flagged;
@property (nonatomic, readonly) _Bool read;
@property (nonatomic, readonly) _Bool deleted;
@property (nonatomic, readonly) _Bool senderVIP;
@property (nonatomic, readonly, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property (nonatomic, readonly, getter=isLibraryMessage) _Bool libraryMessage;
@property (nonatomic, readonly) long long libraryID;

- (_Bool)isEqual:(id)arg1;
- (id)messageID;
- (id)remoteID;
- (id)copyMessageInfo;

@end
