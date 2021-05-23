/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface MiroPlayheadView : UIView

{
    UIView *_line;
    _Bool _tintColorForPlayhead;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end
