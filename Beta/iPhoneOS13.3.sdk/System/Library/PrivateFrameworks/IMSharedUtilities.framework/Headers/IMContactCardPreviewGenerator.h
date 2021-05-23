/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMImagePreviewGenerator.h>

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator

+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (id)vCardDataForURL:(id)arg1;
+ (struct CGImage *)monogramForData:(id)arg1 constraints:(struct IMPreviewConstraints)arg2;

@end
