/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/NSTextAttachment.h>

@class CNComposeRecipient, CNComposeRecipientAtom;

@interface _CNAtomTextAttachment : NSTextAttachment

{
    _Bool _isPlaceholder;
    CNComposeRecipientAtom *_atomView;
}

@property (nonatomic) _Bool isPlaceholder;
@property (retain, nonatomic) CNComposeRecipientAtom *atomView;
@property (nonatomic, readonly) CNComposeRecipient *recipient;

- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithAtomView:(id)arg1;
- (id)attributedStringWithBaseAttributes:(id)arg1;

@end
