/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject

{
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    _Bool _isDragging;
}

- (id)init;
- (void)prepare;
- (void)draggedObjectLifted;
- (void)draggedObjectLanded;
- (void)playFailure;
- (void)playSuccess;

@end
