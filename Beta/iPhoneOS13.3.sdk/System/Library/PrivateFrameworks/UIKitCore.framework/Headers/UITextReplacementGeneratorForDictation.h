/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSTextAlternatives;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator

{
    NSTextAlternatives *_alternatives;
}

@property (nonatomic, readonly) NSTextAlternatives *alternatives;

- (id)replacements;
- (id)initWithAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;

@end
