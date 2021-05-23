/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, TIKeyboardCandidate;

@interface UITextSuggestion : NSObject <Swift>

{
    _Bool _displayStylePlain;
    _Bool __shouldPersist;
    NSString *_inputText;
    NSString *_searchText;
    NSString *_displayText;
    NSString *_headerText;
}

@property (nonatomic, readonly) _Bool _shouldPersist;
@property (nonatomic, readonly) TIKeyboardCandidate *_keyboardCandidate;
@property (copy, nonatomic, readonly) NSString *inputText;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) _Bool displayStylePlain;

+ (id)textSuggestionWithInputText:(id)arg1;
+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;

@end
