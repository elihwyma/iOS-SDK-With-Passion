/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@protocol PLJournalEntryPayloadValidation

+ (unsigned short)modelProperties;
+ (unsigned short)minimumSnapshotPayloadVersion;
+ (unsigned short)isValidForPersistenceWithObjectDictionary: /* Error: Ran out of types for this method. */;
+ (unsigned short)validatePayloadPropertiesForManagedObjectModel: /* Error: Ran out of types for this method. */;
+ (unsigned short)additionalEntityNames;
+ (unsigned short)shouldPersistForChangedKeys:entityName: /* Error: Ran out of types for this method. */;
+ (unsigned short)snapshotSortDescriptors;

- (unsigned short)comparePayloadToObjectDictionary:usingModelProperties:errorDescriptions: /* Error: Ran out of types for this method. */;

@end
