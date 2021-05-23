/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFSharingUtilities : NSObject

+ (id)addCustomLabel:(id)arg1 toMetadata:(id)arg2;
+ (id)addCustomDate:(id)arg1 toMetadata:(id)arg2;
+ (id)addCustomLocation:(id)arg1 toMetadata:(id)arg2;
+ (id)_dateFormatterTemplate;
+ (id)_gpsTimeFormatter;
+ (id)_gpsDateFormatter;
+ (id)gpsDictionaryForLocation:(id)arg1;
+ (id)_exifDateTimeFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)addCreationDate:(id)arg1 toExifDictionary:(id)arg2;
+ (id)addCreationDate:(id)arg1 toTIFFDictionary:(id)arg2;

@end
