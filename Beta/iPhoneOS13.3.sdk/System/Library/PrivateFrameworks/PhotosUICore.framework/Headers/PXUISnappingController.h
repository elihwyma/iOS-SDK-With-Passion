/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSnappingController.h>

@class UISelectionFeedbackGenerator;

@interface PXUISnappingController : PXSnappingController

{
    UISelectionFeedbackGenerator *__selectionBehavior;
}

@property (retain, nonatomic, setter=_setSelectionBehavior:) UISelectionFeedbackGenerator *_selectionBehavior;

- (id)initWithSnappingTarget:(double)arg1;
- (void)interactionBegan;
- (void)didSnapByAttraction;

@end
