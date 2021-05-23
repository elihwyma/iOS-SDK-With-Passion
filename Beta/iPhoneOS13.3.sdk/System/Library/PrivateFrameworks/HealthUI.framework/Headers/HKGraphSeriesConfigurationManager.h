/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject

{
    NSMutableDictionary *_zoomLevelConfigurationManagers;
}

- (id)init;
- (void)reset;
- (id)allDisplayTypes;
- (void)removeConfigurationsForDisplayType:(id)arg1;
- (id)configurationForDisplayType:(id)arg1 zoom:(long long)arg2;
- (void)addConfiguration:(id)arg1 zoom:(long long)arg2;
- (id)allDisplayTypesForZoom:(long long)arg1;
- (id)configurationForGraphSeries:(id)arg1 zoom:(long long)arg2;
- (id)allGraphSeriesForZoom:(long long)arg1;
- (long long)_zoomLevelForGraphZoom:(long long)arg1;
- (id)_configurationManagerForZoom:(long long)arg1;

@end
