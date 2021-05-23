/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSimpleGraphDatabase, HKObserverSet, NSArray, NSCache, NSDictionary, NSURL, NSUUID;

@protocol OS_dispatch_queue;

@interface HDHealthOntologyManager : NSObject

{
    NSDictionary *_codingSystemPriorityInfo;
    NSArray *_privateCodeCreationCodingSortDescriptors;
    NSUUID *_assetAvailabilityRegistrationToken;
    struct os_unfair_lock_s _ivarLock;
    _Atomic _Bool _invalidated;
    NSCache *_nebulousConceptCache;
    HKObserverSet *_observers;
    _Bool _useCache;
    NSCache *_conceptsByIdentifierCache;
    _Atomic _Bool _enabled;
    _Bool _unitTest_useEmbeddedOntology;
    _Bool _unitTest_useEmbeddedOntologyAsset;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_ontologyURL;
    HDSimpleGraphDatabase *_graphDatabase;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSURL *ontologyURL;
@property (retain, nonatomic) HDSimpleGraphDatabase *graphDatabase;
@property (nonatomic, readonly) _Bool ignoresVersionCheckDuringReferenceOntologyImport;
@property (nonatomic, readonly) _Bool ignoresOntologyAssetAvailabilityChanges;
@property (nonatomic, readonly) _Bool unitTest_useEmbeddedOntology;
@property (nonatomic, readonly) _Bool unitTest_useEmbeddedOntologyAsset;
@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (id)_bestDisplayNameForCodings:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)_ontologyURLForProfile:(id)arg1;
+ (_Bool)graphDatabase:(id)arg1 setVersion:(id)arg2 error:(id *)arg3;
+ (id)_unknownConceptName;
+ (id)_bestDisplayableCodingInCodings:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)_primaryCodingKeyPathForSampleTypeIdentifier:(id)arg1;
+ (id)supportedLocales;
+ (void)obliterateWithProfile:(id)arg1 reason:(id)arg2;

- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)invalidateAndWait;
- (void)_queue_clearCache;
- (void)obliterateWithReason:(id)arg1;
- (id)versionWithError:(id *)arg1;
- (id)conceptForContext:(id)arg1 locale:(id)arg2;
- (id)_codingSystemPriorityArrayForSampleType:(id)arg1 property:(id)arg2;
- (id)conceptForIdentifier:(id)arg1 error:(id *)arg2;
- (id)conceptForName:(id)arg1 error:(id *)arg2;
- (id)conceptsContainingAttribute:(long long)arg1 withValue:(id)arg2 error:(id *)arg3;
- (id)conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id *)arg3;
- (id)conceptsWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id *)arg3;
- (id)relationshipsForConceptWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)makeAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id *)arg3;
- (_Bool)breakAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id *)arg3;
- (id)allAssociatedConceptsWithError:(id *)arg1;
- (long long)countOfConceptsAssociatedWithUserRecords:(id *)arg1;
- (id)nameForCodingSystem:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (void)hd_unitTesting_closeDatabase;
- (void)importUsingAssetAtLocation:(id)arg1 rememberLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_ontologyAssetManager;
- (void)_queue_closeDatabase;
- (void)_queue_createAndInitializeIfNeeded;
- (long long)_graphDatabaseVersionImplementation:(id)arg1 error:(id *)arg2;
- (void)_notifyObserversReferenceOntologyCreated;
- (void)_notifyObserversReferenceOntologyWillUpdate;
- (_Bool)_queue_insertTwoItemRawOntologyValueIntoDatabase:(id)arg1 table:(id)arg2 valueString:(id)arg3;
- (_Bool)_queue_insertRawAttributeIntoDatabase:(id)arg1 valueString:(id)arg2;
- (_Bool)_queue_insertRawRelationshipIntoDatabase:(id)arg1 valueString:(id)arg2;
- (void)_notifyObserversReferenceOntologyDidUpdateWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)_queue_graphDatabase;
- (long long)_queue_graphDatabaseVersion;
- (id)_graphDatabaseUserVersionImplementation:(id)arg1 error:(id *)arg2;
- (id)_queue_graphDatabaseUserVersionWithError:(id *)arg1;
- (_Bool)useEmbeddedOntology;
- (void)_handleOntologyAssetAvailabilityUpdate:(long long)arg1;
- (_Bool)_createOntologyDirectoryIfNecessaryWithError:(id *)arg1;
- (_Bool)_queue_copyEmbeddedReferenceOntology;
- (_Bool)supportsLocale:(id)arg1;
- (id)_primaryCodingFromCodings:(id)arg1 usingPrioritizedCodingSystems:(id)arg2;
- (id)_work_graphDatabase:(id)arg1 findConceptForCoding:(id)arg2;
- (id)_adHocConceptCodingFromCodings:(id)arg1;
- (id)_work_graphDatabase:(id)arg1 synthesizeConceptWithPrimaryCoding:(id)arg2 displayName:(id)arg3;
- (id)_work_conceptFromGraphNode:(id)arg1 preloadRelationships:(_Bool)arg2;
- (_Bool)_work_node:(id)arg1 addAttributeWithCoding:(id)arg2 error:(id *)arg3;
- (_Bool)_isNebulousCoding:(id)arg1;
- (id)_privateCodeCreationCodingSortDescriptors;
- (_Bool)performGraphDatabaseWork:(CDUnknownBlockType)arg1 usingTransaction:(_Bool)arg2 error:(id *)arg3;
- (id)conceptsForIdentifiers:(id)arg1 expectedOntologyVersion:(id)arg2 error:(id *)arg3;
- (id)_queue_conceptsWithGraphDatabaseCall:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_conceptWithGraphDatabaseCall:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_conceptsWithGraphDatabaseCall:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(_Bool)arg3 error:(id *)arg4;
- (id)conceptsAssociatedWithSampleUUID:(id)arg1 error:(id *)arg2;
- (void)_queue_clearCachedConceptWithIdentifier:(id)arg1;
- (_Bool)_queue_importReferenceOntology;
- (void)importWithCompletion:(CDUnknownBlockType)arg1;
- (id)_referenceOntologyFileURL;
- (_Bool)useEmbeddedOntologyAsset;
- (_Bool)hd_unitTesting_setVersion:(id)arg1 error:(id *)arg2;
- (id)userVersionWithError:(id *)arg1;
- (_Bool)insertAssociations:(id)arg1 error:(id *)arg2;
- (_Bool)makeAssociationFromSampleUUID:(id)arg1 toConceptIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeAllAssociationsToSampleUUID:(id)arg1 error:(id *)arg2;
- (id)sampleUUIDsAssociatedWithConcept:(id)arg1 error:(id *)arg2;
- (id)conceptsAssociatedWithSample:(id)arg1 error:(id *)arg2;
- (void)hd_unitTesting_setupDatabase;
- (void)hd_unitTesting_disableCache;
- (void)hd_unitTesting_clearCache;

@end
