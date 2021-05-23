/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPDragItem.h>

@interface TSWPURLDragItem : TSWPDragItem

{
    struct CGPoint _canvasDragPoint;
    struct _NSRange _range;
}

@property (nonatomic, readonly) struct CGPoint canvasDragPoint;
@property (nonatomic, readonly) struct _NSRange range;

- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect)arg2 canvasDragPoint:(struct CGPoint)arg3 range:(struct _NSRange)arg4;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(struct CGRect)arg4;

@end
