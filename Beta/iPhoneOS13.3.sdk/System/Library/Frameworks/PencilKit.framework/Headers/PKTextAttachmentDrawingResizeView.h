/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKTextAttachmentDrawingResizeView : UIView

{
    _Bool _top;
    _Bool _highlighted;
    _Bool _enabled;
    UIImageView *_knobView;
    UIView *_separatorView;
    UIView *_separatorHighlightedView;
}

@property (nonatomic) _Bool top;
@property (retain, nonatomic) UIImageView *knobView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *separatorHighlightedView;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) _Bool shown;

- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)init:(_Bool)arg1;
- (double)resizeContentInset;
- (void)show:(_Bool)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;

@end
