/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSArray, STUsageReportGraphDataPoint, UIColor;

__attribute__((visibility("hidden")))
@interface STBarView : UIView

{
    _Bool _useVibrancy;
    STUsageReportGraphDataPoint *_dataPoint;
    UIColor *_color;
    NSArray *_sectionViews;
    NSArray *_sectionHeightConstraints;
    UIView *_darkenedView;
}

@property (readonly) _Bool useVibrancy;
@property (copy, nonatomic) NSArray *sectionViews;
@property (copy, nonatomic) NSArray *sectionHeightConstraints;
@property (readonly) UIView *darkenedView;
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint;
@property (copy, nonatomic) UIColor *color;
@property (getter=isDarkened) _Bool darkened;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setUpSections;
- (void)setUpSectionHeightConstraints;
- (id)initWithDataPoint:(id)arg1 useVibrancy:(_Bool)arg2;

@end
