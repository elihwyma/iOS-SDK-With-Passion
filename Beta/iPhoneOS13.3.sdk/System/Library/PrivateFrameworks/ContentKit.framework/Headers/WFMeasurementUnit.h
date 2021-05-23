/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFMeasurementUnit : NSObject

+ (id)unitFromString:(id)arg1;
+ (id)unitTypeForUnitClass:(Class)arg1;
+ (id)defaultUnitForUnitType:(id)arg1;
+ (id)availableUnitsForUnitType:(id)arg1;
+ (id)unitFromString:(id)arg1 unitType:(id)arg2 caseSensitive:(_Bool)arg3;
+ (id)availableUnitTypes;
+ (Class)unitClassForUnitType:(id)arg1;
+ (id)localizedStringForUnitType:(id)arg1;
+ (id)unitTypeMap;
+ (id)availableUnitsForUnitType:(id)arg1 cacheResult:(_Bool)arg2;
+ (_Bool)usesMetricSystemForUnitType:(id)arg1;

@end
