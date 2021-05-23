/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNAtomView.h>

@class CNComposeRecipient, UITextInputTraits;

@protocol CNComposeRecipientAtomDelegate;

@interface CNComposeRecipientAtom : CNAtomView

{
    CNComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
    id <CNComposeRecipientAtomDelegate> _delegate;
}

@property (retain, nonatomic) CNComposeRecipient *recipient;
@property (weak, nonatomic) id <CNComposeRecipientAtomDelegate> delegate;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)keyCommands;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (void)handleTouchAndHold;

@end
