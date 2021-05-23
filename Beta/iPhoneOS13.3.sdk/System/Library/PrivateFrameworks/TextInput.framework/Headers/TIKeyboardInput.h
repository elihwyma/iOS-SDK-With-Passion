/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString, TIKeyboardCandidate, TIKeyboardTouchEvent;

@protocol NSCopying><NSObject><NSSecureCoding;

@interface TIKeyboardInput : NSObject

{
    union {
        long long integerValue;
        struct {
            unsigned int uppercase:1;
            unsigned int autoshifted:1;
            unsigned int popupVariant:1;
            unsigned int multitap:1;
            unsigned int flick:1;
            unsigned int gesture:1;
            unsigned int synthesizedByAcceptingCandidate:1;
            unsigned int doubleSpace:1;
            unsigned int rapidDelete:1;
        } fields;
    } _flags;
    _Bool _backspace;
    NSString *_string;
    id <NSCopying><NSObject><NSSecureCoding> _object;
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_inputManagerHint;
    double _timestamp;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> object;
@property (nonatomic, getter=isBackspace) _Bool backspace;
@property (nonatomic, getter=isUppercase) _Bool uppercase;
@property (nonatomic, getter=isAutoshifted) _Bool autoshifted;
@property (nonatomic, getter=isPopupVariant) _Bool popupVariant;
@property (nonatomic, getter=isMultitap) _Bool multitap;
@property (nonatomic, getter=isFlick) _Bool flick;
@property (nonatomic, getter=isGesture) _Bool gesture;
@property (nonatomic, getter=isSynthesizedByAcceptingCandidate) _Bool synthesizedByAcceptingCandidate;
@property (nonatomic, getter=isDoubleSpace) _Bool doubleSpace;
@property (nonatomic, getter=isRapidDelete) _Bool rapidDelete;
@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *inputManagerHint;
@property (nonatomic) double timestamp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
