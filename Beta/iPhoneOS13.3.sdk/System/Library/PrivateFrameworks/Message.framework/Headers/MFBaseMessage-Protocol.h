/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol MFBaseMessage <Swift>

@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) unsigned int dateReceivedInterval;
@property (nonatomic, readonly) unsigned int dateSentInterval;
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

- (unsigned short)copyMessageInfo;

@end
