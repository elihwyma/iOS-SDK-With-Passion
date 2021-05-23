/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <GeoServices/GEOTileRequester.h>

__attribute__((visibility("hidden")))
@interface VKTestIdentifiedMapDataRequester : GEOTileRequester

+ (unsigned char)tileProviderIdentifier;

- (void)start;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end
