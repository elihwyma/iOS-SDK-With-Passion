/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICommand.h>

@class NSArray, NSIndexSet, NSString, UIEvent, UIImage, UIResponder, UIViewController;

@interface UIKeyCommand : UICommand

{
    NSString *_lastLayout;
    NSIndexSet *_keyCodes;
    SEL _upAction;
    _Bool _repeatable;
    _Bool _isPlaceholder;
    long long _buttonType;
    UIEvent *_triggeringEvent;
    UIResponder *_originatingResponder;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    _Bool _handleAfterKeyEvent;
    NSString *_input;
    long long _modifierFlags;
    NSString *_layoutAwareInput;
    long long _layoutAwareModifierFlags;
}

@property (nonatomic, readonly) NSString *_layoutAwareInput;
@property (nonatomic, readonly) long long _layoutAwareModifierFlags;
@property (nonatomic, readonly) NSString *discoverabilityInput;
@property (nonatomic, readonly) SEL upAction;
@property (nonatomic, readonly) _Bool repeatable;
@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic, readonly) NSIndexSet *_keyCodes;
@property (nonatomic, readonly) long long _buttonType;
@property (nonatomic, readonly) UIEvent *_triggeringEvent;
@property (nonatomic, readonly) NSString *_segueIdentifier;
@property (nonatomic, readonly) UIViewController *_controllerForSegue;
@property (nonatomic, readonly) _Bool _handleAfterKeyEvent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSArray *alternates;

+ (_Bool)supportsSecureCoding;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithCompactInput:(id)arg1 action:(SEL)arg2 upAction:(SEL)arg3;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3;
+ (id)keyCommandWithKeyCodes:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 buttonType:(long long)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 segueIdentifier:(id)arg3 discoverabilityTitle:(id)arg4;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(SEL)arg3 upAction:(SEL)arg4 discoverabilityTitle:(id)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextResponder;
- (id)_immutableCopy;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8;
- (id)initWithCommand:(id)arg1;
- (id)initWithKeyCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(long long)arg5 propertyList:(id)arg6 alternates:(id)arg7 discoverabilityTitle:(id)arg8 attributes:(unsigned long long)arg9 state:(long long)arg10;
- (id)_initWithInput:(id)arg1 modifierFlags:(long long)arg2 keyCodes:(id)arg3 action:(SEL)arg4 upAction:(SEL)arg5 discoverabilityTitle:(id)arg6 buttonType:(long long)arg7 segueIdentifier:(id)arg8;
- (void)_localizeWithGSKeyboard:(struct __GSKeyboard *)arg1;
- (_Bool)triggerSegueIfPossible;
- (id)_nonRepeatableKeyCommand;
- (id)_placeholderKeyCommand;
- (void)_setTriggeringEvent:(id)arg1;
- (void)_setOriginatingResponder:(id)arg1;
- (void)_markHandleAfterKeyEvent;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_setViewControllerForSegue:(id)arg1;

@end
