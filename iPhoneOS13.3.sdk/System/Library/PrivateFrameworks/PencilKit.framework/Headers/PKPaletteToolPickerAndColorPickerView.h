//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/PKPaletteViewStateObserving-Protocol.h>

@class NSLayoutConstraint, PKPaletteColorPickerView, PKPaletteToolPickerContainerView, PKPaletteToolPickerView, UIStackView;
@protocol PKPaletteViewStateObservable;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteViewStateObserving>
{
    NSUInteger _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerContainerView *_toolPickerContainerView;
    PKPaletteColorPickerView *_colorPickerView;
    long long _contextEditingMode;
    id <PKPaletteViewStateObservable> _paletteViewState;
    UIStackView *_stackView;
    NSLayoutConstraint *_toolPickerContainerViewWidthConstraint;
    NSLayoutConstraint *_toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint *_compactToolPickerContainerViewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint; // @synthesize compactToolPickerContainerViewWidthConstraint=_compactToolPickerContainerViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint; // @synthesize toolPickerContainerViewHeightConstraint=_toolPickerContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint; // @synthesize toolPickerContainerViewWidthConstraint=_toolPickerContainerViewWidthConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PKPaletteViewStateObservable> paletteViewState; // @synthesize paletteViewState=_paletteViewState;
@property(nonatomic) long long contextEditingMode; // @synthesize contextEditingMode=_contextEditingMode;
@property(readonly, nonatomic) PKPaletteColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView; // @synthesize toolPickerContainerView=_toolPickerContainerView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) NSUInteger edgeLocation; // @synthesize edgeLocation=_edgeLocation;
// - (void).cxx_destruct;
- (void)didChangeAnnotationSupport:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_updateUI;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
- (id)initWithPaletteViewStateObservable:(id)arg1;

@end

