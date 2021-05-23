/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKReachability, NSArray, NSString, UIActivityIndicatorView, UITextField;

@protocol GKNicknameControllerDelegate;

@interface GKNicknameController : NSObject

{
    _Bool _nicknameChangeWasCommitted;
    _Bool _shouldShakeTextFieldOnError;
    _Bool _nicknameWasEdited;
    UITextField *_nickname;
    UIActivityIndicatorView *_activityIndicator;
    id <GKNicknameControllerDelegate> _delegate;
    GKReachability *_reachability;
    NSArray *_suggestedNicknames;
}

@property (nonatomic) _Bool nicknameWasEdited;
@property (nonatomic) _Bool nicknameChangeWasCommitted;
@property (retain, nonatomic) GKReachability *reachability;
@property (retain, nonatomic) NSArray *suggestedNicknames;
@property (retain, nonatomic) UITextField *nickname;
@property (nonatomic) _Bool shouldShakeTextFieldOnError;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak) id <GKNicknameControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)displayNicknameSuggestions;
- (void)nicknameTextChanged:(id)arg1;
- (void)shakeNicknameTextFieldWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateReturnKeyEnabledState;
- (void)stopObservingKeyboardEvents;
- (void)startObservingKeyboardEvents;
- (void)didSelectSuggestion:(id)arg1;

@end
