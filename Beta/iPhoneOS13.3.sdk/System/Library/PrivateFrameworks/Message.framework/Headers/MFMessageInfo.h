/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class NSString;

@interface MFMessageInfo : NSObject <Swift>

{
    unsigned int _flagged:1;
    unsigned int _read:1;
    unsigned int _deleted:1;
    unsigned int _uidIsLibraryID:1;
    unsigned int _hasAttachments:1;
    unsigned int _isVIP:1;
    unsigned int _isHighPriority:1;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned int _sortDateReceivedInterval;
    long long _conversationHash;
    long long _mailboxID;
    long long _generationNumber;
    long long _uid;
    long long _messageIDHash;
    long long _sortUid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
@property (nonatomic, readonly) long long generationNumber;
@property (nonatomic) long long uid;
@property (nonatomic) unsigned int dateReceivedInterval;
@property (nonatomic) unsigned int dateSentInterval;
@property (nonatomic) long long conversationHash;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long messageIDHash;
@property (nonatomic) _Bool flagged;
@property (nonatomic) _Bool read;
@property (nonatomic) _Bool deleted;
@property (nonatomic) _Bool uidIsLibraryID;
@property (nonatomic) _Bool isVIP;
@property (nonatomic, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property (nonatomic) long long sortUid;
@property (nonatomic) unsigned int sortDateReceivedInterval;

+ (long long)newGenerationNumber;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyMessageInfo;
- (id)initWithUid:(long long)arg1 mailboxID:(long long)arg2 messageID:(long long)arg3 dateReceivedInterval:(unsigned int)arg4 dateSentInterval:(unsigned int)arg5 conversationHash:(long long)arg6 read:(_Bool)arg7 knownToHaveAttachments:(_Bool)arg8 flagged:(_Bool)arg9 isVIP:(_Bool)arg10;
- (id)_flagDescription;
- (long long)generationCompare:(id)arg1;

@end
