/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/Swift-Protocol.h>

@class UITouch;

@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@protocol PKDrawingGestureRecognizerProtocol <Swift>

@property (nonatomic, readonly) UITouch *drawingTouch;
@property (weak, nonatomic) id <PKDrawingGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id <PKDrawingGestureTarget> drawingTarget;

- (unsigned short)cancel;
- (unsigned short)end;

@end
