/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class SXFill;

@protocol SXDraggable;

@interface SXFillView : UIView

{
    SXFill *_fill;
    id <SXDraggable> _dragable;
    struct CGRect _originalFrame;
}

@property (nonatomic, readonly) SXFill *fill;
@property (nonatomic) struct CGRect originalFrame;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic, readonly) id <SXDraggable> dragable;

- (void)load;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithFill:(id)arg1;

@end
