/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class AXSSKeyChord, NSString;

@interface AXSSKeyboardEvent : NSObject

{
    _Bool _isDownEvent;
    _Bool _isRepeatEvent;
    _Bool _isModifierChangedEvent;
    _Bool _isLeftCommandDown;
    _Bool _isRightCommandDown;
    _Bool _isLeftOptionDown;
    _Bool _isRightOptionDown;
    _Bool _isLeftControlDown;
    _Bool _isRightControlDown;
    _Bool _isLeftShiftDown;
    _Bool _isRightShiftDown;
    _Bool _isCapsLockDown;
    _Bool _isFnDown;
    unsigned long long _keyCode;
    NSString *_unicodeCharacter;
}

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property (nonatomic) _Bool isDownEvent;
@property (nonatomic) _Bool isRepeatEvent;
@property (nonatomic) _Bool isModifierChangedEvent;
@property (nonatomic, readonly) _Bool isCommandDown;
@property (nonatomic) _Bool isLeftCommandDown;
@property (nonatomic) _Bool isRightCommandDown;
@property (nonatomic, readonly) _Bool isOptionDown;
@property (nonatomic) _Bool isLeftOptionDown;
@property (nonatomic) _Bool isRightOptionDown;
@property (nonatomic, readonly) _Bool isControlDown;
@property (nonatomic) _Bool isLeftControlDown;
@property (nonatomic) _Bool isRightControlDown;
@property (nonatomic, readonly) _Bool isShiftDown;
@property (nonatomic) _Bool isLeftShiftDown;
@property (nonatomic) _Bool isRightShiftDown;
@property (nonatomic) _Bool isCapsLockDown;
@property (nonatomic) _Bool isFnDown;
@property (nonatomic, readonly) long long modifierMask;
@property (nonatomic, readonly) AXSSKeyChord *keyChord;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
