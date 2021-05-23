/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <CoreImage/CIImage.h>

@interface CIImage (AXMExtras)

- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2 appliedImageOrientation:(unsigned int *)arg3;
- (unsigned int)_imageOrientationForInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2;
- (unsigned int)_imageOrientationForInterfaceOrientation:(long long)arg1 isMirrored:(_Bool)arg2;
- (void)saveToURL:(id)arg1 withOrientation:(unsigned int)arg2 diagnostics:(id)arg3;
- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 isMirrored:(_Bool)arg2 appliedImageOrientation:(unsigned int *)arg3;
- (void)writeImageInAllOrientationsToDirectoryAtURL:(id)arg1 diagnostics:(id)arg2;

@end
