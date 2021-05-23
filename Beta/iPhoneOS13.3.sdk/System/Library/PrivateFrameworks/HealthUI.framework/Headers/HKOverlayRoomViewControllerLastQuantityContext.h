/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayNamedDataSource, HKInteractiveChartOverlayViewController, HKOverlayRoomApplicationItems, NSString;

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject

{
    long long _overlayMode;
    HKInteractiveChartOverlayViewController *_overlayChartController;
    HKOverlayRoomApplicationItems *_applicationItems;
    HKDisplayType *_overlayDisplayType;
    HKDisplayTypeContextItem *_lastUpdatedContextItem;
    HKInteractiveChartOverlayNamedDataSource *_cacheDataSource;
}

@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)_colorForDisplayType:(id)arg1;
- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (void)overlayStateDidChange:(_Bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (void)invalidateContextItem;
- (id)initWithOverlayChartController:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)_buildLastValueDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_buildLastQuantityDisplayType;
- (id)_buildContextWithTime:(id)arg1 value:(id)arg2;
- (id)_valueFromQuantity:(id)arg1;
- (id)_buildFullTitle:(id)arg1;

@end
