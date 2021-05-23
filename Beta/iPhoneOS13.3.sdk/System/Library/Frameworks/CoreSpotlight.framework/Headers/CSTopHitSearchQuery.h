/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSUserQuery.h>

@class NSMutableArray;

@interface CSTopHitSearchQuery : CSUserQuery

{
    NSMutableArray *_batches;
    unsigned long long _foundItemCount;
    CDUnknownBlockType foundItemsHandler;
    CDUnknownBlockType completionHandler;
}

- (CDUnknownBlockType)completionHandler;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFoundItemsHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)foundItemCount;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4;
- (id)filterQueries;
- (void)setFilterQueries:(id)arg1;
- (CDUnknownBlockType)foundItemsHandler;
- (void)_handleBatches:(id)arg1;
- (void)handleCompletion:(id)arg1;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;
- (void)handleFoundItems:(id)arg1;
- (_Bool)isTopHitQuery;

@end
