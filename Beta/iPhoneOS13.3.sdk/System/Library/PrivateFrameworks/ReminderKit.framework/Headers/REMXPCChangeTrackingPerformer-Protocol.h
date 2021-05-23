/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@protocol REMXPCChangeTrackingPerformer

- (unsigned short)currentChangeToken: /* Error: Ran out of types for this method. */;
- (unsigned short)currentChangeTokenForAccountTypes:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)currentChangeTokenForAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getTrackingStateWithClientID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveTrackingState:withClientID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchHistoryAfterToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchHistoryAfterDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteHistoryBeforeToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteHistoryBeforeDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAuxiliaryChangeInfos:completionHandler: /* Error: Ran out of types for this method. */;

@end
