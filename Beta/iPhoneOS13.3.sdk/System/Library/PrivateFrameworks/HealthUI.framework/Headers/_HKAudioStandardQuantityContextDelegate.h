/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKInteractiveChartOverlayNamedDataSource, HKLineSeries, NSString;

@interface _HKAudioStandardQuantityContextDelegate : NSObject

{
    HKInteractiveChartOverlayNamedDataSource *_cacheDataSource;
    HKDisplayType *_primaryDisplayType;
}

@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKLineSeries *alternateLineSeries;

- (id)formatterForTimescope:(long long)arg1;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;
- (id)_statItemForTimeScope:(long long)arg1;

@end
