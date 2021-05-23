/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKLegendView, NSArray, NSMutableArray, NSMutableDictionary, _HKGraphViewAxisAnnotationHandler, _HKGraphViewSelectionContext;

@interface _HKGraphViewSeriesGroup : NSObject

{
    NSMutableDictionary *_zoomToSeriesMapping;
    NSMutableArray *_currentSeries;
    _HKGraphViewSelectionContext *_selectionContext;
    _HKGraphViewAxisAnnotationHandler *_axisAnnotationHandler;
    NSArray *_axesToShowSimultaneously;
    HKLegendView *_legendView;
    struct CGSize _lastLegendSize;
}

@property (retain, nonatomic) NSMutableDictionary *zoomToSeriesMapping;
@property (retain, nonatomic) NSMutableArray *currentSeries;
@property (retain, nonatomic) _HKGraphViewSelectionContext *selectionContext;
@property (retain, nonatomic) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler;
@property (retain, nonatomic) NSArray *axesToShowSimultaneously;
@property (retain, nonatomic) HKLegendView *legendView;
@property (nonatomic) struct CGSize lastLegendSize;

- (id)init;

@end
