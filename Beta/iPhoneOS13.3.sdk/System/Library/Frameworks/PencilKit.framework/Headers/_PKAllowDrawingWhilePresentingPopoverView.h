/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView

{
    _Bool _isHitTesting;
    id <_PKAllowDrawingWhilePresentingPopoverViewDelegate> _delegate;
}

@property (nonatomic) _Bool isHitTesting;
@property (weak, nonatomic) id <_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
