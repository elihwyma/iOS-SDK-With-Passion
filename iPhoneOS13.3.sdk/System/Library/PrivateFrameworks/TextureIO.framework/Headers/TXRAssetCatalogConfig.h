//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TXRAssetCatalogFileAttributes, TXRTexture;

@interface TXRAssetCatalogConfig : NSObject
{
    TXRTexture *_texture;
    TXRAssetCatalogFileAttributes *_baseFileAttributes;
    NSMutableSet *_fileAttributesList;
    NSUInteger _pixelFormat;
    NSUInteger _mipmapOption;
    NSUInteger _memory;
    NSUInteger _graphicsFeatureSet;
    NSUInteger _idiom;
    NSUInteger _displayColorSpace;
    NSUInteger _scaleFactor;
}

@property(nonatomic) NSUInteger scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) NSUInteger displayColorSpace; // @synthesize displayColorSpace=_displayColorSpace;
@property(nonatomic) NSUInteger idiom; // @synthesize idiom=_idiom;
@property(nonatomic) NSUInteger graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(nonatomic) NSUInteger memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) TXRTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) NSUInteger mipmapOption; // @synthesize mipmapOption=_mipmapOption;
@property(nonatomic) NSUInteger pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) NSSet *fileAttributesList; // @synthesize fileAttributesList=_fileAttributesList;
@property(retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes; // @synthesize baseFileAttributes=_baseFileAttributes;
// - (void).cxx_destruct;
- (void)addFileAttributesForLevel:(NSUInteger)arg1 face:(NSUInteger)arg2 fileFormat:(NSUInteger)arg3 colorSpace:(CGColorSpace )arg4 exifOrientation:(unsigned char)arg5;
- (void)addFileAttributesForLevel:(NSUInteger)arg1 fileFormat:(NSUInteger)arg2 colorSpace:(CGColorSpace )arg3 exifOrientation:(unsigned char)arg4;
- (void)addFileAttributesForLevel:(NSUInteger)arg1 face:(NSUInteger)arg2;
- (void)addFileAttributesForLevel:(NSUInteger)arg1;
- (id)initWithTexture:(id)arg1;

@end

