/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacementGenerator : NSObject

{
    UITextRange *_replacementRange;
    NSString *_stringToReplace;
}

@property (retain, nonatomic) UITextRange *replacementRange;
@property (copy, nonatomic) NSString *stringToReplace;

- (id)replacements;
- (_Bool)shouldAllowString:(id)arg1 intoReplacements:(id)arg2;
- (id)replacementWithText:(id)arg1;
- (void)addPlaceholderForEmptyReplacements:(id)arg1;
- (_Bool)isStringToReplaceMisspelled;

@end
