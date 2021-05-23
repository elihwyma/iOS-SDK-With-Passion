/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@protocol WFDrawerDragTracking <Swift>

@property (readonly) double minTranslationY;
@property (readonly) double maxTranslationY;

- (unsigned short)beginDragging;
- (unsigned short)endDraggingWithAnimation: /* Error: Ran out of types for this method. */;
- (unsigned short)endDragging;
- (unsigned short)updateDragForVerticalTranslation: /* Error: Ran out of types for this method. */;

@end
