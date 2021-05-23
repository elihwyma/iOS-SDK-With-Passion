/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextReplacementGenerator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator

{
    NSArray *_multilingualAlternatives;
}

@property (nonatomic, readonly) NSArray *multilingualAlternatives;

- (id)replacements;
- (id)initWithMultilingualAlternatives:(id)arg1 stringToReplace:(id)arg2 replacementRange:(id)arg3;

@end
