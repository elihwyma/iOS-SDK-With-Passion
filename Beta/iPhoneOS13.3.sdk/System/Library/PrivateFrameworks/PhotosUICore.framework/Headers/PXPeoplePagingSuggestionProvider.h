/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject

{
    NSArray *_currentSuggestions;
    NSMutableArray *_unvisitedSuggestions;
    NSMutableArray *_visitedSuggestions;
}

@property (copy, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSMutableArray *unvisitedSuggestions;
@property (retain, nonatomic) NSMutableArray *visitedSuggestions;

- (id)init;
- (_Bool)hasNextSuggestions;
- (_Bool)hasPreviousSuggestions;
- (id)previousSuggestions;
- (id)nextSuggestionsWithPageLimit:(long long)arg1;
- (void)appendSuggestionArray:(id)arg1;
- (void)removeSuggestions:(id)arg1;
- (void)removeAllSuggestions;

@end
