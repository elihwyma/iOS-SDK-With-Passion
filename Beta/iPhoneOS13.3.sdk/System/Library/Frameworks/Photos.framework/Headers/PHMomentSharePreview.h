/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class CPLMomentSharePreviewData, NSArray, NSData, NSString, PHAsset;

@interface PHMomentSharePreview : NSObject

{
    CPLMomentSharePreviewData *_previewData;
    NSData *_thumbnailImageData;
    NSArray *_previewImageData;
    PHAsset *_keyAsset;
    struct CGRect _cropRect;
}

@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSArray *previewImageData;
@property (copy, nonatomic) PHAsset *keyAsset;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic, readonly) NSString *keyAssetIdentifier;

- (id)description;
- (id)initWithThumbnailImageData:(id)arg1 previewData:(id)arg2;

@end
