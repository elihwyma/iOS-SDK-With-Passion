/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKNavigationBarCanvasView;

__attribute__((visibility("hidden")))
@interface CKComposeNavbarManagerContentView : UIView

{
    CKNavigationBarCanvasView *_canvasView;
}

@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
