/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject

{
    TSSTheme *mFromTheme;
    TSSTheme *mToTheme;
    TSUCustomCallBackDictionary *mAssetMap;
}

@property (nonatomic, readonly) TSSTheme *fromTheme;
@property (nonatomic, readonly) TSSTheme *toTheme;

- (id)init;
- (void)dealloc;
- (id)mapStyle:(id)arg1;
- (_Bool)p_hasCachedMappingsForPresetsOfKind:(id)arg1;
- (id)mapPresetsWithKindFromPreset:(id)arg1;
- (void)cacheAssetMappings:(id)arg1;
- (void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2;
- (id)initWithFromTheme:(id)arg1 toTheme:(id)arg2;
- (id)mappedAssetForAsset:(id)arg1;
- (void)clearMappingCache;

@end
