/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSXPCCoder.h>

@interface NSXPCCoder (GEOXPCUtil)

- (long long)geo_decodeXPCInt64ForKey:(id)arg1 success:(_Bool *)arg2;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 success:(_Bool *)arg2;
- (void)geo_encodeXPCInt64:(long long)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCDouble:(double)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCData:(id)arg1 forKey:(id)arg2;
- (void)geo_encodeXPCString:(id)arg1 forKey:(id)arg2;
- (long long)geo_decodeXPCInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (double)geo_decodeXPCDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (id)geo_decodeXPCDataForKey:(id)arg1;
- (id)geo_decodeXPCStringForKey:(id)arg1;

@end
