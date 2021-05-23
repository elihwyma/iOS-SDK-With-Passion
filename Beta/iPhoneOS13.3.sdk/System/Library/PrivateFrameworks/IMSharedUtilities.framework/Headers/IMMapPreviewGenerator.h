/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMMapPreviewGenerator : IMPreviewGenerator

+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (_Bool)writesToDisk;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id *)arg4;
+ (struct CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1;
+ (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;
+ (id)mapSnapshotterQueue;
+ (id)titleBarMaskImageForWidth:(double)arg1 constraints:(struct IMPreviewConstraints)arg2;
+ (id)vCardDataForURL:(id)arg1;
+ (id)vCardURLSForData:(id)arg1;
+ (id)valueForKey:(id)arg1 forURLComponents:(id)arg2;

@end
