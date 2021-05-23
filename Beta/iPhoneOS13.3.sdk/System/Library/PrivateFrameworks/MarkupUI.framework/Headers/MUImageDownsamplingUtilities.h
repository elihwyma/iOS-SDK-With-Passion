/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <Foundation/NSObject.h>

@interface MUImageDownsamplingUtilities : NSObject

+ (id)_uniqueTemporaryDirectory;
+ (id)_preferredFileExtensionForContentType:(id)arg1;
+ (void)_shouldFlattenEXIFOrientation:(_Bool *)arg1 andDownsample:(_Bool *)arg2 sourceContent:(id)arg3;
+ (id)_flattenRotation:(_Bool)arg1 withDownsampling:(_Bool)arg2 sourceImage:(id)arg3;
+ (id)_sourceContentType:(id)arg1;
+ (id)_flattenEXIFOrientation:(_Bool)arg1 withDownsampling:(_Bool)arg2 sourceContent:(id)arg3 withUTI:(id)arg4;
+ (id)_preferredFileDisplayNameForSourceContent:(id)arg1;
+ (struct CGImageSource *)_newImageSourceWithSourceContent:(id)arg1;
+ (double)_maxDimensionOfSize:(struct CGSize)arg1 fittingToArea:(double)arg2;
+ (struct CGSize)_sizeFittingArea:(double)arg1 withSize:(struct CGSize)arg2;
+ (_Bool)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2;

@end
