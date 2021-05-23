/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@interface AKSignatureBaselineView : UIView

{
    double _baselinePercent;
    struct UIEdgeInsets _lastSafeAreaInsets;
}

@property (nonatomic) struct UIEdgeInsets lastSafeAreaInsets;
@property (nonatomic) double baselinePercent;

- (id)initWithCoder:(id)arg1;
- (double)scaleFactor;
- (void)_commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_isRTL;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBaselineInContext:(struct CGContext *)arg1;

@end
