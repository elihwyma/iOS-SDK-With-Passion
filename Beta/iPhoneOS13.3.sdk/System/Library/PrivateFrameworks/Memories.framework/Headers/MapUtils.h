/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapUtils : NSObject

+ (id)locationWithImageURL:(id)arg1;
+ (float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2;
+ (struct CGPoint)pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(struct CGSize)arg3 geographicBounds:(struct CGRect)arg4;
+ (struct CGRect)geographicRectFromPixelRect:(struct CGRect)arg1 onEquirectangularMapWithSize:(struct CGSize)arg2 geographicBounds:(struct CGRect)arg3;

@end
