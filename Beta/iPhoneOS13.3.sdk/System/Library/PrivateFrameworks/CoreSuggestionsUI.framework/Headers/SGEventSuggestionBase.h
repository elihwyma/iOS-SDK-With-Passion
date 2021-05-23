/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class EKEvent, NSString, SGRealtimeEvent;

@protocol SGSuggestionDelegate;

@interface SGEventSuggestionBase : NSObject

{
    SGRealtimeEvent *_realtimeEvent;
    EKEvent *_eventKitEvent;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

+ (id)calendarImage;
+ (id)_eventStore;
+ (void)confirm:(_Bool)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (id)suggestionPrimaryAction;
- (id)realtimeSuggestion;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionDismissAction;
- (id)suggestionSubtitle;
- (id)suggestionCategory;
- (id)suggestionTitle;
- (id)primaryActionTitle;
- (id)initWithRealtimeEvent:(id)arg1;
- (id)suggestionsEvent;
- (void)eventKitStoreChangedNotification:(id)arg1;
- (id)eventKitEvent;
- (CDUnknownBlockType)suggestionCategoryItemComparator;

@end
