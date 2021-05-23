/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSArray, UIStackView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentControl : UIControl

{
    _Bool _usesDarkTheme;
    long long _selectedSegmentIndex;
    NSArray *_segmentTitles;
    NSArray *_segmentImages;
    UIStackView *_stackView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) _Bool usesDarkTheme;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (copy, nonatomic) NSArray *segmentTitles;
@property (retain, nonatomic) NSArray *segmentImages;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)_removeAllSegmentViews;
- (void)_populateSegmentViewsWithCount:(unsigned long long)arg1;

@end
