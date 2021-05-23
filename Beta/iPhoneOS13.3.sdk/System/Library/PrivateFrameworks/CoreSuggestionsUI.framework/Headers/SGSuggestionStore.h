/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/SGList.h>

@class NSArray, NSMutableArray, NSString;

@protocol SGSuggestionDelegate;

@interface SGSuggestionStore : SGList

{
    NSMutableArray *_suggestions;
    long long _notificationsLockCount;
    _Bool _modified;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)sectionWithItem:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)removeSuggestion:(id)arg1;
- (void)updateSuggestion:(id)arg1;
- (void)lockNotifications;
- (void)unlockNotifications;

@end
