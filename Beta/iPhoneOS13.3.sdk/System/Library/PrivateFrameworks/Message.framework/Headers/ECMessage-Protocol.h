/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@protocol ECMailAccount, ECMailbox, ECMessageHeaders, ECMimePart;

@protocol ECMessage <Swift>

@property (copy, nonatomic, readonly) NSString *persistentID;
@property (copy, nonatomic, readonly) ECSubject *subject;
@property (copy, nonatomic, readonly) NSArray *from;
@property (copy, nonatomic, readonly) NSArray *to;
@property (copy, nonatomic, readonly) NSArray *cc;
@property (copy, nonatomic, readonly) NSArray *bcc;
@property (copy, nonatomic, readonly) NSArray *senders;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (copy, nonatomic, readonly) NSArray *listUnsubscribe;
@property (copy, nonatomic, readonly) NSString *remoteID;
@property (nonatomic, readonly) id <ECMailbox> mailbox;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) _Bool isServerSearchResult;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, readonly, getter=isPartOfExistingThread) _Bool partOfExistingThread;
@property (nonatomic, readonly) id <ECMimePart> bodyPart;
@property (copy, nonatomic, readonly) NSDictionary *headersDictionary;
@property (copy, nonatomic, readonly) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly) NSSet *labels;
@property (nonatomic, readonly) id <ECMailAccount> account;
@property (nonatomic, readonly) id <ECMessageHeaders> headers;
@property (copy, nonatomic, readonly) NSArray *references;
@property (copy, nonatomic, readonly) NSUUID *documentID;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;

- (unsigned short)bestAlternativePart: /* Error: Ran out of types for this method. */;

@end
