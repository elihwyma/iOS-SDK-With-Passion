/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSUUID, TIDocumentState, TITextInputTraits, UITextInputMode;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerState : NSObject <Swift>

{
    _Bool _needsInputModeSwitchKey;
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
    UITextInputMode *_documentInputMode;
    NSUUID *_documentIdentifier;
}

@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TITextInputTraits *textInputTraits;
@property (retain, nonatomic) UITextInputMode *documentInputMode;
@property (copy, nonatomic) NSUUID *documentIdentifier;
@property (nonatomic) _Bool needsInputModeSwitchKey;

+ (_Bool)supportsSecureCoding;
+ (id)stateForKeyboardState:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)createDocumentStateIfNecessary;

@end
