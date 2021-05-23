/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _MKStackingPlaceholderView : UIView

{
    NSLayoutConstraint *_contentHeightConstraint;
}

@property (nonatomic) double contentHeight;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithHeight:(double)arg1;

@end
