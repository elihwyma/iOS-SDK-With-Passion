/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSArray;

@protocol NTKEditOptionContainerView;

@interface NTKEditOptionPickerView : UIView

{
    NSArray *_options;
    unsigned long long _visibleOptionBufferSize;
    CDUnknownBlockType _optionToViewMapper;
    _Bool _active;
    unsigned long long _numberOfOptions;
    unsigned long long _selectedOptionIndex;
    UIView<NTKEditOptionContainerView> *_containerView;
    struct UIEdgeInsets _padding;
    struct CGAffineTransform _contentTransform;
}

@property (retain, nonatomic) UIView<NTKEditOptionContainerView> *containerView;
@property (nonatomic, readonly) unsigned long long numberOfOptions;
@property (copy, nonatomic) CDUnknownBlockType optionToViewMapper;
@property (nonatomic) unsigned long long numberOfSides;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) struct CGAffineTransform contentTransform;
@property (nonatomic, readonly) id selectedOption;
@property (nonatomic) unsigned long long selectedOptionIndex;
@property (nonatomic) _Bool active;

- (id)description;
- (void)layoutSubviews;
- (id)_newContainerView;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;
- (void)_tileContainerForTransitionDirection:(long long)arg1;
- (id)optionAtIndex:(unsigned long long)arg1;
- (id)_selectedSideView;
- (struct CGRect)_frameForContainerView;
- (Class)_sideViewClass;
- (void)_willDisplaySideView:(id)arg1;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;
- (void)applyBreathingScale:(double)arg1;
- (void)applyRubberBandingFraction:(double)arg1;
- (void)_updateContainer;
- (void)_enumerateSideViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_transitionToSelectedOption;
- (void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1;
- (void)decrementSelection;
- (void)incrementSelection;
- (id)_sideViewAtIndex:(unsigned long long)arg1;

@end
