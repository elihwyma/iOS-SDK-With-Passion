/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <MFMailMessage.h>

@class NSArray;

@interface MFIMAPMessage : MFMailMessage

{
    unsigned long long _size;
    NSArray *_customFlags;
    unsigned int _uid;
    unsigned long long _uniqueRemoteId;
}

- (unsigned int)uid;
- (void)setUid:(unsigned int)arg1;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)_privacySafeDescription;
- (id)remoteID;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (_Bool)hasTemporaryUid;
- (id)originalMailboxURL;
- (unsigned long long)uniqueRemoteId;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (_Bool)isPartial;
- (void)setIsPartial:(_Bool)arg1;
- (_Bool)isMessageContentsLocallyAvailable;
- (void)setHasTemporaryUid:(_Bool)arg1;
- (id)mailboxName;
- (id)remoteMailboxURL;
- (id)initWithFlags:(unsigned long long)arg1 customFlags:(id)arg2 size:(unsigned long long)arg3 uid:(unsigned int)arg4;
- (long long)compareByNumberWithMessage:(id)arg1;
- (id)customFlags;

@end
