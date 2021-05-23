/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPressesEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPhysicalKeyboardEvent : UIPressesEvent

{
    _Bool _canPrivatize;
    _Bool __externalEvent;
    int _inputFlags;
    NSString *_modifiedInput;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
    NSString *_markedInput;
    long long _modifierFlags;
    NSString *_privateInput;
    long long _privateModifierFlags;
    NSString *_hint;
}

@property (retain, nonatomic) NSString *_modifiedInput;
@property (retain, nonatomic) NSString *_unmodifiedInput;
@property (retain, nonatomic) NSString *_shiftModifiedInput;
@property (retain, nonatomic) NSString *_commandModifiedInput;
@property (retain, nonatomic) NSString *_markedInput;
@property (retain, nonatomic) NSString *_privateInput;
@property (retain, nonatomic) NSString *_hint;
@property (nonatomic) long long _modifierFlags;
@property (nonatomic) long long _privateModifierFlags;
@property (nonatomic, readonly) long long _gsModifierFlags;
@property (nonatomic, readonly) _Bool _isKeyDown;
@property (nonatomic, readonly) _Bool _isGlobeKey;
@property (nonatomic, readonly) _Bool _isModifierKey;
@property (nonatomic, readonly) _Bool _isARepeat;
@property (nonatomic, readonly) long long _keyCode;
@property (nonatomic) int _inputFlags;
@property (nonatomic, getter=_isExternalEvent) _Bool _externalEvent;

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (long long)type;
- (id)_cloneEvent;
- (void)_privatize;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1 keyboard:(struct __GSKeyboard *)arg2;
- (_Bool)_matchesKeyCommand:(id)arg1;

@end
