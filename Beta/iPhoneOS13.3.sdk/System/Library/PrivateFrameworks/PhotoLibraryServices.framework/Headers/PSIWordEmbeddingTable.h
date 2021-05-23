/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable

{
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    struct __CFLocale *_locale;
    _Bool _localeIsGerman;
}

- (void)clear;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(_Bool)arg2 writable:(_Bool)arg3 locale:(id)arg4;
- (void)cacheWritableStatements;
- (void)cacheSearchableStatements;
- (id)dumpWordEmbeddingTable;
- (id)matchesForToken:(id)arg1;
- (id)wordEmbeddingsForToken:(id)arg1;
- (_Bool)isInsertedWithWord:(id)arg1;
- (void)insertWord:(id)arg1 synonyms:(id)arg2;
- (void)removeWord:(id)arg1;
- (id)wordEmbeddingVersion;

@end
