/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@protocol EDUbiquitousConversationManagerDelegate <Swift>

- (unsigned short)pruneConversationTables: /* Error: Ran out of types for this method. */;
- (unsigned short)setPersistenceConversationFlags:syncKey:forConversationID:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)syncedConversationIDsBySyncKey;
- (unsigned short)persistenceConversationFlagsForConversationID: /* Error: Ran out of types for this method. */;
- (unsigned short)conversationIDForMessageIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)messageIDsForConversationID:limit: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteMessageIDsAdded:forConversationID: /* Error: Ran out of types for this method. */;
- (unsigned short)clearConversationFlagsAndSyncKeyForConversationIDs: /* Error: Ran out of types for this method. */;

@end
