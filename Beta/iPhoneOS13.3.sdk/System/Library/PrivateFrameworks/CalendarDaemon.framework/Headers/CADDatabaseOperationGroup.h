/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup <Swift>

+ (_Bool)requiresEventAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventOrReminderAccess;

- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 optionsMask:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 preventLineFolding:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseSaveWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseCommitWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(CDUnknownBlockType)arg1;
- (struct __CFSet *)_copyToIntCFSetRef:(id)arg1;
- (struct __CFArray *)_copyToIntCFArrayRef:(id)arg1;
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;
- (id)_importData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 outError:(int *)arg4;

@end
