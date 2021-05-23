/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKPaletteToolPickerView;

@protocol PKPaletteViewStateObservable;

@interface PKPaletteToolPickerContainerView : UIView

{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerView *_toolPickerView;
    id <PKPaletteViewStateObservable> _paletteViewState;
    NSLayoutConstraint *_toolPickerViewTopConstraint;
    NSLayoutConstraint *_toolPickerViewBottomConstraint;
    NSLayoutConstraint *_toolPickerViewLeftConstraint;
    NSLayoutConstraint *_toolPickerViewRightConstraint;
}

@property (weak, nonatomic) id <PKPaletteViewStateObservable> paletteViewState;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewRightConstraint;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithPaletteViewStateObservable:(id)arg1;
- (void)didChangeAnnotationSupport:(id)arg1;

@end
