/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOVectorTileDecoder : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;
- (id)decodeTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;

@end
