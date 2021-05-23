/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PUFilmstripAsset, UIImage;

__attribute__((visibility("hidden")))
@interface PUFilmstripMediaProviderResult : NSObject

{
    _Bool _isReadyForDelivery;
    UIImage *_image;
    NSDictionary *_resultInfo;
    long long _requestNumber;
    PUFilmstripAsset *_asset;
    struct CGSize _targetSize;
    CDStruct_1b6d18a9 _actualTime;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSDictionary *resultInfo;
@property (nonatomic) long long requestNumber;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) CDStruct_1b6d18a9 actualTime;
@property (retain, nonatomic) PUFilmstripAsset *asset;
@property (nonatomic) _Bool isReadyForDelivery;

- (long long)compare:(id)arg1;

@end
