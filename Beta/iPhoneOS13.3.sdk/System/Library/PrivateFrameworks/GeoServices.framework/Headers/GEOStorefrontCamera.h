/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOStorefrontCamera : NSObject

{
    int _cameraNumber;
    struct CGSize _imageSize;
    struct GEOOrientedPosition _position;
    unsigned char _lensType;
    struct GEOLensModel _projection;
    NSArray *_textureIds;
}

@property (nonatomic, readonly) int cameraNumber;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) struct GEOOrientedPosition position;
@property (nonatomic, readonly) unsigned char lensType;
@property (nonatomic, readonly) struct GEOLensModel projection;
@property (nonatomic, readonly) NSArray *textureIds;

- (id)init;
- (id)initWithCameraMetadata:(id)arg1;

@end
