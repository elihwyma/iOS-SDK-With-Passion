/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@protocol SGSuggestionDelegate;

@protocol SGSuggestion <Swift>

@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

- (unsigned short)suggestionPrimaryAction;
- (unsigned short)suggestionCategory;
- (unsigned short)suggestionTitle;

@end
