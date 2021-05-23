/*
 Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

#import <Foundation/NSObject.h>

@interface DCIMLocationUtilities : NSObject

+ (id)_sharedGPSDateAndTimestampFormatter;
+ (id)locationFromImageProperties:(id)arg1;
+ (id)locationFromImageProperties:(id)arg1 timestampIfMissing:(id)arg2;
+ (struct CLLocationCoordinate2D)locationCoordinate2DFromAVAsset:(id)arg1;
+ (id)locationFromAVAsset:(id)arg1 timestampIfMissing:(id)arg2;

@end
