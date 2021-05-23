/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject

{
    _Bool _keyDown;
    unsigned short _keyCode;
    unsigned short _alternativeKeyCode;
    unsigned int _usagePage;
    unsigned int _modifierState;
    unsigned int _gsModifierState;
    NSString *_unmodifiedInput;
    NSString *_modifiedInput;
    NSString *_shiftModifiedInput;
}

@property (nonatomic) unsigned short keyCode;
@property (nonatomic) unsigned short alternativeKeyCode;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) _Bool keyDown;
@property (retain, nonatomic) NSString *unmodifiedInput;
@property (retain, nonatomic) NSString *modifiedInput;
@property (retain, nonatomic) NSString *shiftModifiedInput;
@property (nonatomic) unsigned int modifierState;
@property (nonatomic) unsigned int gsModifierState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;
- (struct __GSKeyboard *)_getUIKitKeyboardRef;
- (void)translateStringToKeycode;
- (void)translateKeycode;

@end
