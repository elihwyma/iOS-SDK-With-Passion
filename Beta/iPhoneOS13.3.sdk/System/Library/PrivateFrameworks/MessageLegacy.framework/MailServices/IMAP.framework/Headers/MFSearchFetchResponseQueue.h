/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFFetchResponseQueue.h>

@interface MFSearchFetchResponseQueue : MFFetchResponseQueue

- (id)init;
- (_Bool)shouldAddUID:(unsigned int)arg1;
- (id)messageToSyncFlagsForUID:(unsigned int)arg1;

@end
