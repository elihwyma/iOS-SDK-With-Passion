/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSMutableArray, NSMutableDictionary;

@protocol CNFavoritesLogger;

@interface CNFavorites : NSObject

{
    NSMutableArray *_entries;
    _Bool _dirty;
    _Bool _needsReload;
    CNContactStore *_contactStore;
    NSMutableDictionary *_uidToEntry;
    unsigned long long _postCount;
    id <CNFavoritesLogger> _logger;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableDictionary *uidToEntry;
@property (nonatomic) _Bool dirty;
@property (nonatomic) unsigned long long postCount;
@property (nonatomic) _Bool needsReload;
@property (nonatomic, readonly) id <CNFavoritesLogger> logger;
@property (nonatomic, readonly) NSArray *entries;
@property (readonly, getter=isFull) _Bool full;

+ (id)sharedInstance;
+ (id)favoritesPath;
+ (void)flushSingleton;

- (id)init;
- (void)dealloc;
- (void)save;
- (void)addEntry:(id)arg1;
- (void)removeAllEntries;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 logger:(id)arg2;
- (void)_postChangeNotification;
- (_Bool)shouldSimulateCrashReportForError:(id)arg1;
- (id)_entryDictionaries;
- (void)_addEntryToMap:(id)arg1;
- (void)loadEntriesIfNecessary;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (_Bool)writeFavoritesToFile:(id)arg1;
- (id)_uniqueRematchedEntries:(id)arg1;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (_Bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (_Bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (void)_entriesChangedExternally;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)saveImmediately;
- (void)rematchEntriesWithOptions:(unsigned long long)arg1;
- (void)recacheIdentitiesSoon;

@end
