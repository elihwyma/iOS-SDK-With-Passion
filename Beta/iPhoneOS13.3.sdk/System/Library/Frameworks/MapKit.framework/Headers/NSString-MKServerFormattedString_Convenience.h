/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSString.h>

@interface NSString (MKServerFormattedString_Convenience)

+ (id)_mapkit_commaListDelimiter;
+ (id)_mapkit_formattedStringForFloatingPointNumber:(id)arg1;
+ (id)_mapkit_formattedStringForFloat:(double)arg1;
+ (id)_mapkit_localizedDistanceStringWithMeters:(unsigned int)arg1 abbreviated:(_Bool)arg2;
+ (id)_mapkit_voiceOverLocalizedDistanceStringWithMeters:(unsigned int)arg1;
+ (id)_mapkit_formattedStringForCoordinate:(struct CLLocationCoordinate2D)arg1;

- (id)mkServerFormattedString;
- (id)_mapkit_componentsSeparatedFromCommaDelimitedList;
- (double)_mapkit_cgFloatValue;

@end
