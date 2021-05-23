/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MFLibraryMessage, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@protocol ECMailAccount, ECMailbox, ECMessageHeaders, ECMimePart;

@interface _MFAddableMessage : NSObject <Swift>

{
    long long _messageIDHash;
    MFLibraryMessage *_libraryMessage;
    NSString *_urlString;
}

@property (nonatomic, readonly) MFLibraryMessage *libraryMessage;
@property (copy, nonatomic, readonly) NSString *urlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)bestAlternativePart:(_Bool *)arg1;
- (long long)messageIDHash;
- (id)initWithLibraryMessage:(id)arg1 messageIDHash:(long long)arg2 mailboxURL:(id)arg3;

@end
