/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class UITargetedDragPreview;

@interface TSWPDragItem : NSObject

{
    UITargetedDragPreview *_targetedDragPreview;
    struct CGRect _canvasRect;
}

@property (retain, nonatomic, readonly) UITargetedDragPreview *targetedDragPreview;
@property (nonatomic, readonly) struct CGRect canvasRect;

- (void)dealloc;
- (id)initWithDragPreview:(id)arg1 canvasRect:(struct CGRect)arg2;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(struct CGRect)arg4;

@end
