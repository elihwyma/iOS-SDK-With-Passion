/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect

{
    WebSelectionRect *_webRect;
}

@property (retain, nonatomic) WebSelectionRect *webRect;

+ (id)textSelectionRectsWithWebRects:(id)arg1;

- (void)dealloc;
- (id)range;
- (_Bool)isVertical;
- (_Bool)containsStart;
- (_Bool)containsEnd;
- (struct CGRect)rect;
- (long long)writingDirection;
- (id)initWithWebRect:(id)arg1;

@end
