/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextSelectionRect.h>

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect

{
    WebSelectionRect *webRect;
}

@property (retain, nonatomic) WebSelectionRect *webRect;

+ (id)rectWithWebRect:(id)arg1;
+ (id)rectsWithWebRects:(id)arg1;

- (void)dealloc;
- (id)range;
- (_Bool)isVertical;
- (_Bool)containsStart;
- (_Bool)containsEnd;
- (struct CGRect)rect;
- (long long)writingDirection;
- (id)initWithWebRect:(id)arg1;

@end
