/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@interface MKURLSerializer : NSObject

+ (id)stringForMapType:(unsigned long long)arg1;
+ (id)stringForDirectionsType:(unsigned long long)arg1;

- (id)mapItemsFromUrl:(id)arg1 options:(id *)arg2;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;

@end
