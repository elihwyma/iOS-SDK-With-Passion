/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDataCollectionSearchSession : NSObject

{
    _Bool _pendingResults;
    _Bool _pendingSuggestionsResults;
}

@property (nonatomic) _Bool pendingResults;
@property (nonatomic) _Bool pendingSuggestionsResults;

+ (void)end;
+ (void)begin;
+ (id)currentSession;

- (void)searchStringDidChange;
- (void)didFetchResultSuggested:(_Bool)arg1;
- (void)didSelectResult:(id)arg1;

@end
