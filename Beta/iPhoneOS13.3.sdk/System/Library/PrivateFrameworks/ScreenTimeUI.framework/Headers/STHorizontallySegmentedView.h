/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSNumber;

@interface STHorizontallySegmentedView : UIView

{
    _Bool _useVibrancy;
    _Bool _truncateLabels;
    NSArray *_segmentItems;
    NSNumber *_numberOfLines;
    unsigned long long _maximumNumberOfLines;
    double _previousWidth;
    NSMutableArray *_segmentViews;
    NSArray *_segmentConstraints;
}

@property (retain, nonatomic) NSNumber *numberOfLines;
@property (readonly) unsigned long long maximumNumberOfLines;
@property (readonly) _Bool useVibrancy;
@property (readonly) _Bool truncateLabels;
@property (nonatomic) double previousWidth;
@property (nonatomic, readonly) NSMutableArray *segmentViews;
@property (copy, nonatomic) NSArray *segmentConstraints;
@property (copy, nonatomic) NSArray *segmentItems;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)_setUpConstraints;
- (void)_stHorizontallySegmentedViewCommonInit;
- (id)initWithVibrancy:(_Bool)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(_Bool)arg3;

@end
