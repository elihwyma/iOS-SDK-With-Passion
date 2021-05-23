/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@protocol CADDatabaseInterface

- (unsigned short)CADDatabaseGetUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseRegisterForDetailedChangeTracking: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseUnregisterForDetailedChangeTracking: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseFetchObjectChangesForEntityTypes:insideObject:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseMarkIndividualChangesConsumed:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetSequenceNumber: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetChangesSinceSequenceNumber:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetChangedEntityIDsSinceTimestamp:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseGetNextAssignableColorWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseImportICSData:intoCalendarsWithIDs:optionsMask:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseExportICSDataForCalendarItems:preventLineFolding:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseSetShowsDeclinedEvents:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseRebuildOccurrenceCacheWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseSaveWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseCommitWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseRollbackWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseResetWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseCanModifyCalendarDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)CADDatabaseLastConfirmedSplashScreenVersion: /* Error: Ran out of types for this method. */;

@end
