/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView

{
    EKDayOccurrenceView *_occurrenceView;
    UIColor *_baseColor;
    double _radius;
}

@property (retain, nonatomic) UIColor *baseColor;
@property (weak, nonatomic, readonly) EKDayOccurrenceView *occurrenceView;
@property (nonatomic) double radius;

- (void)willMoveToSuperview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;
- (struct CGRect)_circleRect;

@end
