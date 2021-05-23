/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSString;

@interface CACSpokenCommandPresentation : NSObject

{
    NSArray *_commandItems;
    NSArray *_commandsOnly;
    NSMutableArray *_newCommandItems;
    NSMutableArray *_deletedCommandIdentifiers;
    NSArray *_commandGroups;
    NSArray *_allCommandGroups;
    NSString *_searchString;
    NSString *_locale;
    NSArray *_externalCommandGroups;
    NSArray *_relevantCommandIdentifiers;
    NSDictionary *_additionalCommandInfo;
    NSSet *_excludedSearchWordSet;
    NSDictionary *_conflictDictionary;
    _Bool _usedByPreferences;
}

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *searchString;
@property (readonly) _Bool isSearching;
@property (retain, nonatomic) NSArray *externalCommandGroups;
@property (retain, nonatomic) NSArray *relevantCommandIdentifiers;
@property (retain, nonatomic) NSDictionary *additionalCommandInfo;
@property (nonatomic, readonly) NSArray *nestedCommandGroupsAndItems;
@property (nonatomic, readonly) NSArray *flattenedCommandGroupsAndItems;
@property (nonatomic) _Bool usedByPreferences;

- (id)init;
- (void)saveChanges;
- (void)discardChanges;
- (void)resetConflicts;
- (void)_flushCommands;
- (void)_deepFlush;
- (_Bool)hasConflicts;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (void)sortCustomCommands;
- (void)addCustomCommandItem:(id)arg1;
- (_Bool)groupIsCollapsed:(id)arg1;
- (id)_filteredCommandGroupsAndItemsWithSearchString:(id)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 ignoreGroups:(_Bool)arg2;
- (id)itemsConflictingWithItem:(id)arg1;
- (void)refreshItemWithIdentifier:(id)arg1;
- (void)deleteCustomCommandAtIndex:(unsigned long long)arg1;
- (void)setGroup:(id)arg1 isCollapsed:(_Bool)arg2;

@end
