/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROPendingBrailleEdit.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit

{
    NSString *_pendingBraille;
    NSArray *_modifiers;
}

@property (nonatomic, readonly) NSString *pendingBraille;
@property (nonatomic, readonly) NSArray *modifiers;

- (id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2;

@end
