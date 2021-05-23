/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UILabel;

@protocol _TVInspectorCapturingViewDelegate;

@interface _TVInspectorCapturingView : UIView

{
    _Bool _testingHits;
    UILabel *_descriptionLabel;
    id <_TVInspectorCapturingViewDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isTestingHits) _Bool testingHits;
@property (weak, nonatomic, readonly) UILabel *descriptionLabel;
@property (weak, nonatomic) id <_TVInspectorCapturingViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didTapView:(id)arg1;

@end
