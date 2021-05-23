/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKGraphSeriesBlockCoordinate;

@interface HKGraphSeriesVisibleBlockCoordinates : NSObject

{
    id <HKGraphSeriesBlockCoordinate> _minimum;
    id <HKGraphSeriesBlockCoordinate> _maximum;
    id <HKGraphSeriesBlockCoordinate> _last;
}

@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinate> minimum;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinate> maximum;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinate> last;

- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3;

@end
