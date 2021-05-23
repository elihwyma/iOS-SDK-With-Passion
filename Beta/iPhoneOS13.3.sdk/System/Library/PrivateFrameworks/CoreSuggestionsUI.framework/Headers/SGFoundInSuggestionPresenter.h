/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/SGSuggestionPresenter.h>

@class NSArray;

@protocol NSObject;

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter

{
    CDUnknownBlockType _filterBlock;
    NSArray *_searchableItems;
    unsigned long long _contentOptions;
    id <NSObject> _contactStoreObserverToken;
    _Bool _loadScheduled;
}

@property (copy) NSArray *realtimeSuggestions;

- (void)dealloc;
- (void)addSuggestionsFromSearchableItems:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
- (void)reloadSuggestionsFromSearchableItems;
- (void)_setNeedsToReloadSuggestionsAfter:(double)arg1;
- (void)_loadSuggestions;
- (void)_loadedRealtimeSuggestions:(id)arg1;
- (id)formatMixedCategoriesTitle:(id)arg1;

@end
