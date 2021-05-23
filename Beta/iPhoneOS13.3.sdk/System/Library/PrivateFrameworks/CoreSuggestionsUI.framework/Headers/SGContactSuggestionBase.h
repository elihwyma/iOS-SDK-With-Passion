/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class NSString, SGRealtimeContact;

@protocol SGSuggestionDelegate;

@interface SGContactSuggestionBase : NSObject

{
    SGRealtimeContact *_realtimeContact;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

+ (id)contactImage;
+ (void)confirm:(_Bool)arg1 suggestion:(id)arg2 completion:(CDUnknownBlockType)arg3;

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
- (id)initWithRealtimeContact:(id)arg1;
- (id)primaryActionTitle;

@end
