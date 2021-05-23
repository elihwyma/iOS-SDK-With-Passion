/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLDeviceConfiguration : NSObject

{
    _Bool _isPad;
    _Bool _isTV;
    _Bool _isWatch;
    _Bool _isMac;
    _Bool _isRidingCrudSnow;
    _Bool _isRidingPowderSnow;
    _Bool _isRetina;
    double _screenScale;
    struct CGSize _logicalScreenSize;
}

@property (nonatomic) _Bool isRetina;
@property (nonatomic) _Bool isPad;
@property (nonatomic) _Bool isTV;
@property (nonatomic) _Bool isWatch;
@property (nonatomic) _Bool isMac;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) _Bool isRidingCrudSnow;
@property (nonatomic, readonly) _Bool isRidingPowderSnow;
@property (nonatomic, readonly) struct CGSize logicalScreenSize;
@property (nonatomic, readonly) _Bool shouldUseNanoThumbnailFormats;
@property (nonatomic, readonly) unsigned long long logicalScreenPixelSize;

+ (id)defaultDeviceConfiguration;

- (id)description;
- (id)initWithLogicalScreenSize:(struct CGSize)arg1 screenScale:(double)arg2 deviceClass:(void *)arg3 isRidingCrudSnow:(_Bool)arg4 isRidingPowderSnow:(_Bool)arg5;

@end
