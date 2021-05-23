/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITextSelectionRect.h>

@interface _CNAtomViewTextSelectionRect : UITextSelectionRect

{
    _Bool containsStart;
    _Bool containsEnd;
    _Bool isVertical;
    long long writingDirection;
    struct CGRect rect;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) long long writingDirection;
@property (nonatomic) _Bool containsStart;
@property (nonatomic) _Bool containsEnd;
@property (nonatomic) _Bool isVertical;

@end
