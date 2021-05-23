/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@class AXSSPunctuationEntryCloudKitHelper, AXSSPunctuationGroupCloudKitHelper, NSArray;

@interface AXSSPunctuationManager

{
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    _Bool _cloudKitSync;
    _Bool _cloudKitPushInSameProcess;
}

@property (nonatomic) _Bool cloudKitSync;
@property (nonatomic) _Bool cloudKitPushInSameProcess;
@property (nonatomic, readonly) NSArray *punctuationGroups;

+ (void)initialize;
+ (id)sharedDatabase;

- (id)init;
- (_Bool)isProtectedDataAvailable;
- (void)removeEntry:(id)arg1;
- (void)_setupDatabase;
- (void)updateEntry:(id)arg1;
- (void)_initializeSystemGroups;
- (void)_managedObjectChanged:(id)arg1;
- (void)_cloudKitUpdated:(id)arg1;
- (void)updatePunctuationGroup:(id)arg1;
- (id)_punctuationEntryFromManagedObject:(id)arg1;
- (void)_updateCloudKitHelpers;
- (void)_initializeCloudKitHelpers;
- (id)_punctuationGroupForEntry:(id)arg1;
- (id)_databaseDirectoryPath;
- (_Bool)_saveIfPossible;
- (id)_databaseFilePath;
- (id)_punctuationGroupFromManagedObject:(id)arg1;
- (_Bool)isBasePunctuationGroup:(id)arg1;
- (id)parentPunctuationGroup:(id)arg1;
- (void)updatePunctuationGroup:(id)arg1 fromCloudKit:(_Bool)arg2;
- (void)addCloudRecordToPurge:(id)arg1 recordEntityType:(id)arg2;
- (long long)stringToRule:(id)arg1;
- (id)punctuationEntriesForGroupUUID:(id)arg1;
- (id)punctuationGroupsForContexts;
- (void)_filterAutoswitchContexts:(id)arg1 punctuationGroupsForContexts:(id)arg2;
- (void)updateEntry:(id)arg1 fromCloudKit:(_Bool)arg2;
- (id)ruleToString:(long long)arg1;
- (id)punctuationGroupForUUID:(id)arg1;
- (id)nextDefaultGroupName;
- (void)userAuthChanged;
- (id)cloudRecordsToPurge:(id)arg1;
- (void)removeAllRecordsForPurge;
- (void)removeCloudRecordForPurge:(id)arg1;
- (id)mostBasePunctuationGroupForGroup:(id)arg1;
- (void)importPunctuationGroup:(id)arg1;
- (id)punctuationEntryObjectFromLocalObjects:(id)arg1;
- (void)removePunctuationGroup:(id)arg1;
- (id)punctuationEntryForUUID:(id)arg1;
- (id)allPunctuationGroup;
- (id)somePunctuationGroup;
- (id)nonePunctuationGroup;

@end
