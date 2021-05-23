/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject

{
    HKGraphSeries *_graphSeries;
    HKGraphSeriesBlockCoordinateList *_graphSeriesCoordinates;
    struct CGRect _graphSeriesScreenRect;
    struct CGAffineTransform _graphSeriesPointTransform;
}

@property (nonatomic, readonly) HKGraphSeries *graphSeries;
@property (nonatomic, readonly) struct CGRect graphSeriesScreenRect;
@property (nonatomic, readonly) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates;
@property (nonatomic, readonly) struct CGAffineTransform graphSeriesPointTransform;

- (id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(struct CGRect)arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(struct CGAffineTransform)arg4;

@end
