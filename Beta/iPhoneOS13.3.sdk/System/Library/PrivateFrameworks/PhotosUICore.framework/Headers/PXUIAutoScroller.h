/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller

{
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)_handleDisplayLink:(id)arg1;
- (struct CGRect)visibleRectForScrollView:(id)arg1;
- (void)startRepeating;
- (void)stopRepeating;
- (_Bool)autoscrollWithOffset:(struct CGPoint)arg1;
- (void)updateWithGestureRecognizer:(id)arg1;

@end
