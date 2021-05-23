/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXContextualNotificationCenter;

@interface _PXContextualNotificationCenterUpdatingView : UIView

{
    PXContextualNotificationCenter *_contextualNotificationCenter;
}

@property (weak, nonatomic) PXContextualNotificationCenter *contextualNotificationCenter;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
