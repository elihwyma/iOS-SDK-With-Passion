/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSOperation.h>

@class NSSet, NSString, PSSearchResults;

@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation

{
    _Bool _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
    PSSearchResults *_currentResults;
    id <PSSearchOperationDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *query;
@property (copy, nonatomic, readonly) NSSet *rootEntries;
@property (copy, readonly) PSSearchResults *currentResults;
@property (nonatomic, getter=isNewQuery) _Bool newQuery;
@property (weak) id <PSSearchOperationDelegate> delegate;

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)main;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (void)_didCancel;
- (_Bool)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (_Bool)_systemLanguageHasContinuousScript;

@end
