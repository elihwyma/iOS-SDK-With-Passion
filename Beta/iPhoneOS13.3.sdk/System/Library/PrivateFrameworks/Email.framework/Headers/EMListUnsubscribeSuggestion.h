/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMListUnsubscribeCommand, NSString, SGSuggestionPresenter;

@protocol SGSuggestion, SGSuggestionDelegate;

@interface EMListUnsubscribeSuggestion : NSObject

{
    id <SGSuggestionDelegate> suggestionDelegate;
    EMListUnsubscribeCommand *_listUnsubscribeCommand;
    SGSuggestionPresenter *_suggestionPresenter;
}

@property (retain, nonatomic) EMListUnsubscribeCommand *listUnsubscribeCommand;
@property (weak, nonatomic) SGSuggestionPresenter *suggestionPresenter;
@property (nonatomic, readonly) id <SGSuggestion> suggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

+ (id)suggestionPrimaryActionString;
+ (id)suggestionDismissActionTitle;
+ (id)unsubscribeTitleAlertString;
+ (id)unsubscribeMessageAlertString;

- (_Bool)isEqual:(id)arg1;
- (void)ignore;
- (id)suggestionPrimaryAction;
- (CDUnknownBlockType)suggestionComparator;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionDismissAction;
- (id)suggestionCategory;
- (id)suggestionTitle;
- (void)unsubscribe;

@end
