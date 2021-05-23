/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUPlayheadView : UIView

{
    UIView *_line;
    UIView *_outline;
    _Bool _tintColorForPlayhead;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end
