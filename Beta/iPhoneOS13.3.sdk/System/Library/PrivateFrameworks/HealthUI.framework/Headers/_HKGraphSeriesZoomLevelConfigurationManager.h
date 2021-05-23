/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _HKGraphSeriesZoomLevelConfigurationManager : NSObject

{
    NSMutableDictionary *_displayTypeIdentifierToConfiguration;
    NSMutableDictionary *_graphSeriesUUIDToConfiguration;
    NSMutableArray *_graphSeriesInOrderAdded;
}

@property (retain, nonatomic) NSMutableDictionary *displayTypeIdentifierToConfiguration;
@property (retain, nonatomic) NSMutableDictionary *graphSeriesUUIDToConfiguration;
@property (retain, nonatomic) NSMutableArray *graphSeriesInOrderAdded;

- (id)init;
- (void)reset;
- (void)addConfiguration:(id)arg1;
- (id)allDisplayTypes;
- (void)removeConfigurationForDisplayType:(id)arg1;
- (id)configurationForDisplayType:(id)arg1;
- (id)configurationForGraphSeries:(id)arg1;
- (id)allGraphSeries;
- (id)_displayTypeIdentifierForDisplayType:(id)arg1;

@end
