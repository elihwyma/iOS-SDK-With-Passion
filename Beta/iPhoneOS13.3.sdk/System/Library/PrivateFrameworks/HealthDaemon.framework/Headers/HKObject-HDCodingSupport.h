/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKObject.h>

@interface HKObject (HDCodingSupport)

+ (Class)hd_dataEntityClass;
+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;

- (long long)entityType;
- (id)codableRepresentationForSync;
- (Class)hd_dataEntityClass;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)hd_sampleType;
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5;
- (id)hd_relatedJournalEntries;
- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;

@end
