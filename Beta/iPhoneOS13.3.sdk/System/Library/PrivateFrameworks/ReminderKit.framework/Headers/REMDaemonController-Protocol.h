/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@protocol REMDaemonController <Swift>

- (unsigned short)invalidate;
- (unsigned short)syncDebugPerformerWithReason:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)asyncStorePerformerWithReason:loadHandler:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncStorePerformerWithReason:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)asyncSyncInterfacePerformerWithReason:loadHandler:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncChangeTrackingPerformerWithReason:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncDebugPerformerWithErrorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncSyncInterfacePerformerWithReason:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncIndexingPerformerWithReason:errorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)asyncIndexingPerformerWithReason:loadHandler:errorHandler: /* Error: Ran out of types for this method. */;

@end
