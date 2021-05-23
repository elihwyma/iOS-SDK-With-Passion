/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject

{
    NTKPhoto *_photo;
    PHAsset *_asset;
    unsigned long long _subsampleFactor;
}

@property (retain, nonatomic) NTKPhoto *photo;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) unsigned long long subsampleFactor;

@end
