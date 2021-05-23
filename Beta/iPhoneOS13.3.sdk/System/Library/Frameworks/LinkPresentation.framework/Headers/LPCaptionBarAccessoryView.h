/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface LPCaptionBarAccessoryView

{
    long long _type;
    _Bool _shouldFlipHorizontally;
    UIColor *_color;
    UIImageView *_accessoryView;
}

@property (nonatomic, readonly) struct CGSize size;

- (id)init;
- (void)layoutComponentView;
- (void)componentViewDidMoveToWindow;
- (id)_createImageViewWithImage:(id)arg1;
- (id)ensureAccessoryView;
- (id)initWithType:(long long)arg1 side:(long long)arg2;

@end
