/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PHAsset, PHFace, PHObject;

@interface PXFaceTileImageRequest : NSObject

{
    _Bool _fullResMissing;
    _Bool _canceled;
    int _requestID;
    int _imageManagerRequestID;
    PHFace *_face;
    NSString *_cacheKey;
    PHObject *_originalRequestObject;
    PHAsset *_assetContainingFace;
    NSDate *_ppt_requestStartDate;
    struct CGSize _lastDeliveredSize;
    struct CGRect _normalizedFaceCropRect;
    struct CGRect _normalizedActualFaceRect;
    struct PXFaceTileImageParams _params;
}

@property (retain, nonatomic) PHFace *face;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) struct PXFaceTileImageParams params;
@property int imageManagerRequestID;
@property (nonatomic) struct CGRect normalizedFaceCropRect;
@property (nonatomic) struct CGRect normalizedActualFaceRect;
@property (nonatomic) struct CGSize lastDeliveredSize;
@property (retain, nonatomic) PHObject *originalRequestObject;
@property (retain, nonatomic) PHAsset *assetContainingFace;
@property _Bool fullResMissing;
@property _Bool canceled;
@property (copy, nonatomic) NSDate *ppt_requestStartDate;

- (void)cancel;
- (void)ppt_reportMeasurementsForImageQuality:(long long)arg1;
- (id)initWithFace:(id)arg1 cacheKey:(id)arg2 params:(struct PXFaceTileImageParams)arg3;

@end
