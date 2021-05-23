/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@interface PVFaceCropUtils : NSObject

+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2 andGroupingIdentifier:(id)arg3;
+ (id)newDictionaryWithCGImageSourceOptions;
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (_Bool)isValidFaceCrop:(id)arg1;
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;

@end
