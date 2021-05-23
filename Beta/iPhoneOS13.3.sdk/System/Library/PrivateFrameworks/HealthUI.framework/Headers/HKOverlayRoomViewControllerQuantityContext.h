/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContext.h>

@class NSString;

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext

{
    NSString *_quantityTypeIdentifier;
    id <HKOverlayRoomViewControllerIntegratedContextDelegate> _optionalDelegate;
    long long _options;
}

@property (retain, nonatomic) NSString *quantityTypeIdentifier;
@property (weak, nonatomic) id <HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;
@property (nonatomic) long long options;

- (_Bool)isEqual:(id)arg1;
- (id)representativeDisplayType;
- (id)buildContextItemWithValue:(id)arg1 valueContext:(id)arg2 forTimeScope:(long long)arg3;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)arg1;
- (void)fetchCachedDataForTimeScope:(long long)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)initWithQuantityIdentifier:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 optionalDelegate:(id)arg4 seriesOptions:(long long)arg5 mode:(long long)arg6;

@end
