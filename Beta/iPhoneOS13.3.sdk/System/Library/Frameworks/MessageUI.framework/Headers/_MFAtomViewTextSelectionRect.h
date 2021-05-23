/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _MFAtomViewTextSelectionRect : UITextSelectionRect

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
