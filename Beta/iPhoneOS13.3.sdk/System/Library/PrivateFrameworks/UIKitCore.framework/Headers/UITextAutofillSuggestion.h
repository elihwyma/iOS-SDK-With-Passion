/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextSuggestion.h>

@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion

{
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *password;

+ (id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2;

- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)_keyboardCandidate;

@end
