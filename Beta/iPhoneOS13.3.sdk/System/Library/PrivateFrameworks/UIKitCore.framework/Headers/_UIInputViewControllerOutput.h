/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerOutput : NSObject <Swift>

{
    _Bool _shouldDismiss;
    _Bool _proceedShouldReturn;
    _Bool _shouldAdvanceInputMode;
    _Bool _hasDictation;
    _Bool _setMarkedText;
    _Bool _unmarkText;
    _Bool _requiresInputManagerSync;
    _Bool _shouldAdvanceResponder;
    _Bool _shouldPostReturnKeyNotification;
    NSArray *_keyboardOutputs;
    NSString *_primaryLanguage;
    NSString *_markedText;
    long long _inputModeListTouchPhase;
    double _inputModeListTouchBegan;
    struct _NSRange _selectedRange;
    struct CGPoint _inputModeListFromLocation;
    struct CGPoint _inputModeListUpdatePoint;
}

@property (retain, nonatomic) NSArray *keyboardOutputs;
@property (nonatomic) _Bool shouldDismiss;
@property (nonatomic) _Bool proceedShouldReturn;
@property (nonatomic) _Bool shouldAdvanceInputMode;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) _Bool hasDictation;
@property (nonatomic) _Bool setMarkedText;
@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange selectedRange;
@property (nonatomic) _Bool unmarkText;
@property (nonatomic) long long inputModeListTouchPhase;
@property (nonatomic) double inputModeListTouchBegan;
@property (nonatomic) struct CGPoint inputModeListFromLocation;
@property (nonatomic) struct CGPoint inputModeListUpdatePoint;
@property (nonatomic) _Bool requiresInputManagerSync;
@property (nonatomic) _Bool shouldAdvanceResponder;
@property (nonatomic) _Bool shouldPostReturnKeyNotification;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (void)_pushNewKeyboardOutput;
- (id)_currentKeyboardOutput;
- (void)setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint)arg3 updatePoint:(struct CGPoint)arg4;

@end
