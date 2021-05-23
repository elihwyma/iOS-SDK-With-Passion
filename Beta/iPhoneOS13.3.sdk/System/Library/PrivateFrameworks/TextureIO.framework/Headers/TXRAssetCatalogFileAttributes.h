/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@interface TXRAssetCatalogFileAttributes : NSObject

{
    struct CGColorSpace *_colorSpace;
    unsigned char _exifOrientation;
    unsigned long long _fileFormat;
}

@property (nonatomic) struct CGColorSpace *colorSpace;
@property (nonatomic) unsigned char exifOrientation;
@property (nonatomic) unsigned long long fileFormat;

- (id)init;

@end
