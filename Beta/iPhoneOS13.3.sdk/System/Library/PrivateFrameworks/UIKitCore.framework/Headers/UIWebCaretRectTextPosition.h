/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextPosition.h>

__attribute__((visibility("hidden")))
@interface UIWebCaretRectTextPosition : UITextPosition

{
    struct CGRect _caretRect;
}

@property (nonatomic, readonly) struct CGRect caretRect;

+ (id)textPositionWithCaretRect:(struct CGRect)arg1;

- (id)initWithCaretRect:(struct CGRect)arg1;

@end
