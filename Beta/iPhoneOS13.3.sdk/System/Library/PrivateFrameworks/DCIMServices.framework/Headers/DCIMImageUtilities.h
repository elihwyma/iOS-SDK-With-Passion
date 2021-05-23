/*
 Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

#import <Foundation/NSObject.h>

@interface DCIMImageUtilities : NSObject

+ (_Bool)generateThumbnailsFromData:(id)arg1 inputSize:(struct CGSize)arg2 preCropLargeThumbnailSize:(struct CGSize)arg3 postCropLargeThumbnailSize:(struct CGSize)arg4 preCropSmallThumbnailSize:(struct CGSize)arg5 postCropSmallThumbnailSize:(struct CGSize)arg6 outSmallThumbnailImageRef:(struct CGImage **)arg7 outLargeThumbnailImageRef:(struct CGImage **)arg8 outLargeThumbnailJPEGData:(id *)arg9 generateFiltersBlock:(CDUnknownBlockType)arg10;

@end
