/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIWebFindOnPageHighlightBubbleView : UIView

{
    struct CGImage *_highlightedContent;
    struct CGPoint _highlightedContentOrigin;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlightedContent:(struct CGImage *)arg1 withOrigin:(struct CGPoint)arg2;

@end
