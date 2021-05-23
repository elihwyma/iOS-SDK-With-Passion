/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface MFIMAPOperation : NSObject

{
    unsigned int _type:3;
    unsigned int _failureCount:4;
    unsigned int _temporaryUids:1;
    NSString *_mailboxName;
    union {
        struct {
            NSArray *trueFlags;
            NSArray *falseFlags;
            struct __CFArray *uids;
        } store;
        struct {
            unsigned int uid;
            NSArray *flags;
            int internalDate;
            unsigned int size;
        } append;
        struct {
            struct __CFArray *srcUids;
            struct __CFArray *dstUids;
            NSString *destinationMailbox;
        } copy;
    } _opSpecific;
}

+ (id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long *)arg2;

- (void)dealloc;
- (id)description;
- (_Bool)isValid;
- (unsigned char)_magic;
- (id)flags;
- (int)operationType;
- (unsigned int)uid;
- (unsigned int)failureCount;
- (void)setFailureCount:(unsigned int)arg1;
- (id)mailboxName;
- (unsigned int)approximateSize;
- (id)flagsToSet;
- (_Bool)usesRealUids;
- (id)uids;
- (id)flagsToClear;
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUIDs:(id)arg3 inMailbox:(id)arg4;
- (void)setUsesRealUids:(_Bool)arg1;
- (id)initWithMailboxToCreate:(id)arg1;
- (id)initWithMailboxToDelete:(id)arg1;
- (unsigned int)firstTemporaryUid;
- (id)initWithAppendedUid:(unsigned int)arg1 approximateSize:(unsigned int)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5;
- (_Bool)isSourceOfTemporaryUid:(unsigned int)arg1;
- (_Bool)actsOnTemporaryUid:(unsigned int)arg1;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (unsigned int)lastTemporaryUid;
- (id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned int)arg4;
- (void)serializeIntoData:(id)arg1;
- (id)internalDate;
- (id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (id)initWithType:(int)arg1 mailbox:(id)arg2;
- (id)sourceUids;
- (id)destinationUids;
- (id)destinationMailbox;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)arg1;
- (_Bool)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;

@end
