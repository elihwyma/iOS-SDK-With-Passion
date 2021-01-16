//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCrowdsourcedFeedbackWhitelist-Protocol.h>
#import <SafariShared/WBSFormAutoFillCorrectionsStore-Protocol.h>

@class NSURL, WBSCrowdsourcedFeedbackDomainNormalizer, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackWhitelist>
{
    NSURL *_localDatabaseURL;
    NSURL *_parsecDatabaseURL;
    WBSSQLiteDatabase *_localDatabase;
    WBSSQLiteDatabase *_parsecDatabase;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
}

+ (id)_defaultParsecDatabaseURL;
+ (id)_defaultLocalDatabaseURL;
+ (id)standardStore;
// - (void).cxx_destruct;
- (BOOL)_removeAllLocalClassifications;
- (void)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 date:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)_removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2;
- (id)_classificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2;
- (BOOL)_setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3;
- (BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2;
- (BOOL)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 dateReclassified:(id)arg4;
- (BOOL)_setParsecMetadataStringValue:(id)arg1 forKey:(id)arg2;
- (id)_parsecMetadataStringValueForKey:(id)arg1;
- (BOOL)_setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2;
- (BOOL)_replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)arg1 inBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_isDatabaseOpen:(id)arg1;
- (void)_closeDatabases;
- (void)_openLocalDatabase;
- (void)_openParsecDatabase;
- (void)_configureDatabase:(id)arg1 currentSchemaVersion:(int)arg2;
- (void)_openDatabasesIfNeeded;
- (id)_normalizeDomain:(id)arg1;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_2;
- (int)_createFreshParsecDatabaseSchema;
- (int)_createFreshLocalDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2;
- (BOOL)_migrateToSchemaVersion:(int)arg1 forDatabase:(id)arg2;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)arg1;
- (int)_schemaVersionForDatabase:(id)arg1;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setDomain:(id)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)closeDatabase;
- (id)init;
- (id)initWithLocalDatabaseURL:(id)arg1 parsecDatabaseURL:(id)arg2;

@end
