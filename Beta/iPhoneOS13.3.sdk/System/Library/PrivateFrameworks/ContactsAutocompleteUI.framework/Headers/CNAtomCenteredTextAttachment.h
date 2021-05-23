/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/NSTextAttachment.h>

@interface CNAtomCenteredTextAttachment : NSTextAttachment

{
    double _height;
}

@property (nonatomic) double height;

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;

@end
