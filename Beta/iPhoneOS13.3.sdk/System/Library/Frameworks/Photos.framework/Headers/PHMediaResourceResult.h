/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCompositeMediaResult.h>

@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult

{
    PHAssetResource *_assetResource;
    NSData *_assetResourceData;
    NSURL *_assetResourceFileURL;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)exifOrientation;
- (id)imageURL;
- (id)mediaMetadata;
- (id)adjustmentData;
- (id)videoURL;
- (_Bool)containsValidData;
- (id)imageUTI;
- (id)initWithRequestID:(int)arg1 assetResource:(id)arg2;

@end
