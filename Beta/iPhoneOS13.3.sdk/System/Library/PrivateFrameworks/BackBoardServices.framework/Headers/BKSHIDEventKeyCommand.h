/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSString;

@interface BKSHIDEventKeyCommand : NSObject <Swift>

{
    NSString *_input;
    long long _keyCode;
    long long _modifierFlags;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
}

@property (retain, nonatomic) NSString *unmodifiedInput;
@property (retain, nonatomic) NSString *shiftModifiedInput;
@property (retain, nonatomic) NSString *commandModifiedInput;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) long long keyCode;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) _Bool isTextualKeyCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (_Bool)_keyCodeIsModifierKey:(long long)arg1;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)keyCommandForEvent:(struct __IOHIDEvent *)arg1 gsKeyboard:(struct __GSKeyboard *)arg2;
+ (_Bool)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(struct __GSKeyboard *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithInput:(id)arg1 keyCode:(long long)arg2 modifierFlags:(long long)arg3;
- (id)_sanitizedInputForDescription;
- (long long)describes:(id)arg1;

@end
