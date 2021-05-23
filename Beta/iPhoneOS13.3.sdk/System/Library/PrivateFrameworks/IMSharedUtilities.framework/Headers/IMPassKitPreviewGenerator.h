/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMImagePreviewGenerator.h>

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator

+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (_Bool)writesToDisk;
+ (id)passDataForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)passDataHasFailed:(id)arg1 error:(id)arg2;
+ (id)passForPassData:(id)arg1 error:(id *)arg2;
+ (_Bool)passHasFailed:(id)arg1 error:(id)arg2;
+ (id)passViewForPass:(id)arg1;
+ (_Bool)passViewHasFailed:(id)arg1;
+ (struct CGImage *)newCroppedAndRescaledImageFromPKPassView:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2;
+ (_Bool)hasFailed:(id)arg1 error:(id)arg2;

@end
