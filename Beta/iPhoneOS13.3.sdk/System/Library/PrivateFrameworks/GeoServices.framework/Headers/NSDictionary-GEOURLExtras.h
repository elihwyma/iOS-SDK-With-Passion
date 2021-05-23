/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSDictionary.h>

@interface NSDictionary (GEOURLExtras)

+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2;

- (id)_placeOrCurrentLocation:(_Bool *)arg1;
- (id)_geo_errorForKey:(id)arg1;
- (id)_geo_newXPCObject;

@end
