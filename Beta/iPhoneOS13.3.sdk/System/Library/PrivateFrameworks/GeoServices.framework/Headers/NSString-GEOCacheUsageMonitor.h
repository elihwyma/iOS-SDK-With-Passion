/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSString.h>

@interface NSString (GEOCacheUsageMonitor)

+ (id)_geo_keyStringForCacheHitWithLoadReason:(unsigned char)arg1 tileSource:(unsigned char)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4;
+ (id)_geo_keyStringForCacheMissWithLoadReason:(unsigned char)arg1 missType:(int)arg2 tileStyle:(int)arg3 tileZoom:(unsigned int)arg4 httpStatus:(unsigned int)arg5;
+ (id)_geo_keyStringForCacheMissErrorDomain:(id)arg1 code:(long long)arg2;
+ (id)stringWithStdString:(const basic_string_7c0a1c0b *)arg1 copy:(_Bool)arg2;

- (void)_geo_cacheHitParameters:(CDUnknownBlockType)arg1;
- (void)_geo_cacheMissParameters:(CDUnknownBlockType)arg1;
- (void)_geo_cacheMissErrorParameters:(CDUnknownBlockType)arg1;
- (id)_geo_formattedString;
- (id)serverFormattedString;
- (basic_string_7c0a1c0b)stdString;
- (id)initWithStdString:(const basic_string_7c0a1c0b *)arg1 copy:(_Bool)arg2;

@end
