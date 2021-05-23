/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey

{
    unsigned int _modifiers;
    unsigned int _keyCode;
    unsigned int _virtualKeyCode;
    NSString *_keyString;
}

@property (retain, nonatomic) NSString *keyString;
@property (nonatomic) unsigned int modifiers;
@property (nonatomic) unsigned int keyCode;
@property (nonatomic) unsigned int virtualKeyCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
