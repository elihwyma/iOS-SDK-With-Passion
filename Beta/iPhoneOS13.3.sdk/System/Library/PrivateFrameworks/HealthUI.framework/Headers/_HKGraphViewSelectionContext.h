/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKGraphSeries, NSArray;

@interface _HKGraphViewSelectionContext : NSObject

{
    long long _selectionState;
    NSArray *_touchPoints;
    NSArray *_selectionAreaMapping;
    NSArray *_selectedRangeBoundariesXValue;
    HKGraphSeries *_closestSeriesToSelection;
    struct CGRect _seriesSelectionRect;
}

@property (nonatomic) long long selectionState;
@property (nonatomic, readonly) double minimumSelectionDistance;
@property (nonatomic) struct CGRect seriesSelectionRect;
@property (retain, nonatomic) NSArray *touchPoints;
@property (retain, nonatomic) NSArray *selectionAreaMapping;
@property (retain, nonatomic) NSArray *selectedRangeBoundariesXValue;
@property (retain, nonatomic) HKGraphSeries *closestSeriesToSelection;

@end
