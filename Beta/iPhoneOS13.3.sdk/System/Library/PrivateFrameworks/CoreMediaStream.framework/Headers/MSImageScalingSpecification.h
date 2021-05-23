/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@interface MSImageScalingSpecification : NSObject

{
    int _assetTypeFlags;
    double _nominalShortSideLength;
    double _minimumLongSideLength;
    double _maximumLongSideLength;
}

@property (nonatomic) double nominalShortSideLength;
@property (nonatomic) double minimumLongSideLength;
@property (nonatomic) double maximumLongSideLength;
@property (nonatomic) int assetTypeFlags;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize)arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;

- (id)description;
- (double)scaleFactorForInputSize:(struct CGSize)arg1;

@end
