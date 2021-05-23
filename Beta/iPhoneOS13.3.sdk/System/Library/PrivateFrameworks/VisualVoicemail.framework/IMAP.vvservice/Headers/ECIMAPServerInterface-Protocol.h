/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol ECIMAPServerInterface <Swift>

@property (nonatomic, readonly) _Bool hasValidConnection;

- (MISSING_TYPE *)storeGmailLabels:state:forUIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)storeFlagChange:forUIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)moveUIDs:toMailboxNamed:copyInfo:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)copyUIDs:toMailboxNamed:copyInfo:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)expungeUIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)appendData:toMailboxNamed:flags:dateReceived:appendInfo:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)expunge;

@end
