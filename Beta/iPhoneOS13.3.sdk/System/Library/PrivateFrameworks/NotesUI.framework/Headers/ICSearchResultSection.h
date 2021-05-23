/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface ICSearchResultSection : NSObject

{
    NSMutableOrderedSet *_searchResults;
    NSMutableDictionary *_identifierToSearchResult;
    NSMutableDictionary *_hiddenSearchResults;
}

@property (retain, nonatomic) NSMutableOrderedSet *searchResults;
@property (retain, nonatomic) NSMutableDictionary *identifierToSearchResult;
@property (retain, nonatomic) NSMutableDictionary *hiddenSearchResults;

- (id)init;
- (id)description;
- (id)identifiers;
- (void)addSearchResults:(id)arg1;
- (id)hiddenIdentifiers;
- (_Bool)removeSearchResultForIdentifier:(id)arg1 forHiding:(_Bool)arg2;
- (void)resetToSearchResults:(id)arg1;

@end
