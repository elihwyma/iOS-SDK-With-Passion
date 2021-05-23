/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator

+ (id)UTITypes;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (_Bool)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 outSize:(struct CGSize *)arg3 error:(id *)arg4;

@end
