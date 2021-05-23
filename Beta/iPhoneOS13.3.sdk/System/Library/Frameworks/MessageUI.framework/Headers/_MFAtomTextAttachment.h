/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/NSTextAttachment.h>

@class MFComposeRecipient, MFModernComposeRecipientAtom;

@interface _MFAtomTextAttachment : NSTextAttachment

{
    _Bool _isPlaceholder;
    MFModernComposeRecipientAtom *_atomView;
}

@property (nonatomic) _Bool isPlaceholder;
@property (retain, nonatomic) MFModernComposeRecipientAtom *atomView;
@property (nonatomic, readonly) MFComposeRecipient *recipient;

- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithAtomView:(id)arg1;
- (id)attributedStringWithBaseAttributes:(id)arg1;

@end
