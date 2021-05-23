/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSHashTable;

@protocol _MKAnimationStackViewDelegate, _MKStackViewDelegate;

@interface _MKStackView : UIView

{
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
    _Bool _bottomConstraintShouldBeGreaterThanOrEqual;
    id <_MKStackViewDelegate> _stackDelegate;
    NSArray *_stackedSubviews;
    id <_MKAnimationStackViewDelegate> _stackAnimationDelegate;
}

@property (weak, nonatomic) id <_MKStackViewDelegate> stackDelegate;
@property (weak, nonatomic) id <_MKAnimationStackViewDelegate> stackAnimationDelegate;
@property (copy, nonatomic) NSArray *stackedSubviews;
@property (nonatomic) _Bool bottomConstraintShouldBeGreaterThanOrEqual;

- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_createConstraints;
- (void)setStackedSubviews:(id)arg1 animated:(_Bool)arg2;

@end
