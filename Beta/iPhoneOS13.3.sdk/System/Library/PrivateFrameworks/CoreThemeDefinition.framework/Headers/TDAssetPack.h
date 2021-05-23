/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject

{
    _Bool wasModified;
    NSSet *tags;
    NSString *outputPath;
    CUIMutableCommonAssetStorage *assetStore;
    NSString *assetPackIdentifier;
}

@property (retain) CUIMutableCommonAssetStorage *assetStore;
@property (retain, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *assetPackIdentifier;
@property (nonatomic) _Bool wasModified;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
