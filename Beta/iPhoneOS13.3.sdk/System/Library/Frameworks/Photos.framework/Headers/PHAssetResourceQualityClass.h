/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject

{
    _Bool _video;
    _Bool _croppedToSquare;
    _Bool _table;
    _Bool _thumbnail;
    PLImageFormat *_backingImageFormat;
    unsigned long long _backingCPLResourceType;
    unsigned long long _maxSideLengthIfSquare;
    unsigned long long _maxNumberOfPixelsIfSquare;
}

@property (retain, nonatomic) PLImageFormat *backingImageFormat;
@property (nonatomic) unsigned long long backingCPLResourceType;
@property (nonatomic, readonly, getter=isVideo) _Bool video;
@property (nonatomic, readonly, getter=isCroppedToSquare) _Bool croppedToSquare;
@property (nonatomic, readonly, getter=isTable) _Bool table;
@property (nonatomic, readonly, getter=isThumbnail) _Bool thumbnail;
@property (nonatomic, readonly) unsigned long long maxSideLengthIfSquare;
@property (nonatomic, readonly) unsigned long long maxNumberOfPixelsIfSquare;

+ (id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)assetResourceQualityClasses;
+ (id)allQualityClassesMatchingPredicate:(id)arg1;
+ (id)anyQualityClassMatchingPredicate:(id)arg1;

- (id)description;
- (long long)_compare:(id)arg1;
- (id)initWithThumbnailFormat:(id)arg1;
- (id)initWithCPLResourceType:(unsigned long long)arg1;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg2;
- (void)preheatDataForThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;

@end
