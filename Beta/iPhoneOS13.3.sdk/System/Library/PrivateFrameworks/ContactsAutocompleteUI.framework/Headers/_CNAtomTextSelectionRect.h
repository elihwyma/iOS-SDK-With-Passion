/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITextSelectionRect.h>

@interface _CNAtomTextSelectionRect : UITextSelectionRect

{
    _Bool containsStart;
    _Bool containsEnd;
    struct CGRect rect;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) _Bool containsStart;
@property (nonatomic) _Bool containsEnd;

@end
