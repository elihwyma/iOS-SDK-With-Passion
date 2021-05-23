/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPOperation.h>

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation

{
    struct __CFArray *messageIds;
    struct __CFArray *internalDates;
}

- (void)dealloc;
- (unsigned char)_magic;
- (unsigned int)approximateSize;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (void)serializeIntoData:(id)arg1;
- (id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (_Bool)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;

@end
