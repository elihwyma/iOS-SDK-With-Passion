/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSString, _SearchBarContent;

@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIView

{
    NSString *_matchDisplayText;
    _SearchBarContent *_searchBarContent;
}

@property (nonatomic, readonly) _SearchBarContent *searchBarContent;
@property (retain, nonatomic) id <HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *matchDisplayText;

+ (id)regularExpressionFromString:(id)arg1 quoteForJavascript:(_Bool)arg2 caseless:(_Bool *)arg3;
+ (_Bool)_hasUppercaseCharacters:(id)arg1;
+ (id)_patternFromSearchString:(id)arg1 quoteForJavascript:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (_Bool)searchIsActive;
- (void)doneAction:(id)arg1;
- (void)activateSearch:(_Bool)arg1;
- (void)setUpEnabled:(_Bool)arg1;
- (void)setDownEnabled:(_Bool)arg1;
- (void)setMatchDisplayVisible:(_Bool)arg1;
- (void)searchKeyboardDidHide:(id)arg1;
- (_Bool)keyboardIsUp;
- (_Bool)keyboardIsDown;
- (void)_lowerKeyboard;

@end
