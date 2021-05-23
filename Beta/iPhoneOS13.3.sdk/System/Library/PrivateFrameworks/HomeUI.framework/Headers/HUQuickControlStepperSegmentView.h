/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface HUQuickControlStepperSegmentView : UIView

{
    _Bool _isSegmentViewHighlighted;
    NSString *_title;
    unsigned long long _segmentLocation;
    double _cornerRadius;
    unsigned long long _reachabilityState;
    UIView *_highlightedOverlayView;
    UILabel *_titleLabel;
    unsigned long long _style;
    unsigned long long _orientation;
    unsigned long long _controlSize;
}

@property (retain, nonatomic) UIView *highlightedOverlayView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) unsigned long long controlSize;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool isSegmentViewHighlighted;
@property (nonatomic) unsigned long long segmentLocation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long reachabilityState;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_updateTitleLabel;
- (id)initWithStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2 controlSize:(unsigned long long)arg3;
- (void)_createTitleLabelIfNecessary;
- (void)_updateUIHighlightedOverlayView;

@end
