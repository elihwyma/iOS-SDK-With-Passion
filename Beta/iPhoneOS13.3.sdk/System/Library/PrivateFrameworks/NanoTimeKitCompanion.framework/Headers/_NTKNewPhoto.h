/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class PHAsset;

@interface _NTKNewPhoto : NSObject

{
    PHAsset *_asset;
    unsigned long long _subsampleFactor;
    struct CGRect _crop;
}

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) struct CGRect crop;
@property (nonatomic) unsigned long long subsampleFactor;

@end
