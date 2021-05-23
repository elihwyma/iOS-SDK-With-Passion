/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UITextSelectionRect.h>

@interface _MFAtomTextSelectionRect : UITextSelectionRect

{
    _Bool containsStart;
    _Bool containsEnd;
    struct CGRect rect;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) _Bool containsStart;
@property (nonatomic) _Bool containsEnd;

@end
