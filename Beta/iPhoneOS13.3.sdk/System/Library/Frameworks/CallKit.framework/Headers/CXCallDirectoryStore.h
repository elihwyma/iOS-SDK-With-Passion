/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXDatabase, NSString, NSURL;

@interface CXCallDirectoryStore : NSObject

{
    _Bool _temporary;
    CXDatabase *_database;
    long long _lastAddBlockingEntriesCount;
    NSString *_addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
    long long _lastRemoveBlockingEntriesCount;
    NSString *_removeBlockingEntriesSQL;
    long long _lastAddIdentificationEntriesCount;
    NSString *_addIdentificationEntriesInsertLabelsSQL;
    NSString *_addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
    long long _lastAddPhoneNumbersCount;
    NSString *_addPhoneNumbersSQL;
    long long _lastRemoveIdentificationEntriesCount;
    NSString *_removeIdentificationEntriesSQL;
}

@property (retain, nonatomic) CXDatabase *database;
@property (nonatomic, getter=isTemporary) _Bool temporary;
@property (nonatomic) long long lastAddBlockingEntriesCount;
@property (copy, nonatomic) NSString *addBlockingEntriesInsertPhoneNumberBlockingEntrySQL;
@property (nonatomic) long long lastRemoveBlockingEntriesCount;
@property (copy, nonatomic) NSString *removeBlockingEntriesSQL;
@property (nonatomic) long long lastAddIdentificationEntriesCount;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertLabelsSQL;
@property (copy, nonatomic) NSString *addIdentificationEntriesInsertPhoneNumberIdentificationEntrySQL;
@property (nonatomic) long long lastAddPhoneNumbersCount;
@property (copy, nonatomic) NSString *addPhoneNumbersSQL;
@property (nonatomic) long long lastRemoveIdentificationEntriesCount;
@property (copy, nonatomic) NSString *removeIdentificationEntriesSQL;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly, getter=isCorrupt) _Bool corrupt;

+ (id)databaseTemplateURL;
+ (id)databaseURLUsingTemporaryDirectory:(_Bool)arg1 error:(id *)arg2;
+ (_Bool)initializeDatabaseIfNecessaryAtURL:(id)arg1 usingTemplateAtURL:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)initReadOnly:(_Bool)arg1 temporary:(_Bool)arg2 error:(id *)arg3;
- (id)initWithTemplateURL:(id)arg1 readOnly:(_Bool)arg2 temporary:(_Bool)arg3 error:(id *)arg4;
- (long long)schemaVersionWithError:(id *)arg1;
- (_Bool)_removeUnreferencedPhoneNumbersWithError:(id *)arg1;
- (_Bool)_removeUnreferencedLabelsWithError:(id *)arg1;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)addBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (_Bool)_addBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2;
- (_Bool)_addPhoneNumbersWithEntryData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)_removeBlockingEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1;
- (long long)_findOrCreateIDForPhoneNumber:(long long)arg1 error:(id *)arg2;
- (_Bool)_addIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (_Bool)_removeIdentificationEntriesWithData:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 extensionID:(long long)arg4 error:(id *)arg5;
- (_Bool)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;
- (_Bool)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (_Bool)containsBlockingEntryForEnabledExtensionWithPhoneNumberInArray:(id)arg1 error:(id *)arg2;
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id *)arg3;
- (_Bool)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;
- (_Bool)vacuumWithError:(id *)arg1;
- (id)initForReadingWithError:(id *)arg1;
- (id)initForReadingAndWritingWithError:(id *)arg1;
- (_Bool)containsExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)addExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id *)arg3;
- (_Bool)removeExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)setState:(long long)arg1 forExtensionWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)setState:(long long)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;
- (_Bool)setStateLastModifiedDate:(id)arg1 forExtensionWithID:(long long)arg2 error:(id *)arg3;
- (_Bool)setStateForAllExtensions:(long long)arg1 error:(id *)arg2;
- (_Bool)removeUnreferencedRecordsWithError:(id *)arg1;
- (id)prioritizedExtensionsWithError:(id *)arg1;
- (id)prioritizedExtensionIdentifiersWithError:(id *)arg1;
- (_Bool)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)addBlockingEntryWithPhoneNumber:(long long)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (_Bool)removeBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (_Bool)removeBlockingEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;
- (_Bool)addIdentificationEntryWithPhoneNumber:(long long)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id *)arg4;
- (long long)idForExtensionWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)idForPhoneNumber:(long long)arg1 error:(id *)arg2;
- (long long)idForLabel:(id)arg1 error:(id *)arg2;
- (long long)addLabel:(id)arg1 error:(id *)arg2;
- (_Bool)addIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (_Bool)removeIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id *)arg3;
- (_Bool)removeIdentificationEntriesForExtensionWithID:(long long)arg1 error:(id *)arg2;
- (_Bool)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (_Bool)containsBlockingEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 error:(id *)arg2;
- (id)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 error:(id *)arg2;

@end
