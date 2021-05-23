/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSData.h>

@interface NSData (GEOExtras)

+ (id)_geo_withXPCData:(id)arg1;
+ (id)_geo_dataForHexString:(id)arg1;
+ (id)dataWithCPPData:(const basic_string_7c0a1c0b *)arg1 copy:(_Bool)arg2;

- (id)_geo_MD5Hash;
- (id)_GEOCreateDispatchData;
- (id)_geo_newXPCData;
- (id)_geo_compressedDataViaAlgo:(int)arg1;
- (id)_geo_decompressedDataViaAlgo:(int)arg1;
- (id)_geo_SHA1Hash;
- (id)_geo_hexString;
- (id)_geo_SHA256Hash;
- (id)initWithCPPData:(const basic_string_7c0a1c0b *)arg1 copy:(_Bool)arg2;
- (basic_string_7c0a1c0b)cppData;

@end
