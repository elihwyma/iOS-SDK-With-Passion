/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUICommonAssetStorage.h>

@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage

{
    NSMutableDictionary *_bitmapInfo;
    unsigned int _useBitmapIndex:1;
    unsigned int _enableLargeCarKeyWorkaround:1;
}

@property (nonatomic) _Bool useBitmapIndex;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setExternalTags:(id)arg1;
- (void)_allocateExtendedMetadata;
- (_Bool)setAsset:(id)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)removeAssetForKey:(const void *)arg1 withLength:(unsigned long long)arg2;
- (_Bool)removeAssetNameKey:(const void *)arg1 withLength:(unsigned long long)arg2;
- (_Bool)_writeOutKeyFormatWithWorkaround;
- (_Bool)_saveBitmapInfo;
- (_Bool)writeToDiskAndCompact:(_Bool)arg1;
- (void)setKeyFormatData:(id)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setEnableLargeCarKeyWorkaround:(_Bool)arg1;
- (void)setThinningArguments:(id)arg1;
- (void)setDeploymentPlatform:(id)arg1;
- (void)setDeploymentPlatformVersion:(id)arg1;
- (void)setAuthoringTool:(id)arg1;
- (_Bool)setAsset:(id)arg1 forKey:(id)arg2;
- (void)setCatalogGlobalData:(id)arg1;
- (void)setAppearanceIdentifier:(unsigned short)arg1 forName:(id)arg2;
- (void)setLocalizationIdentifier:(unsigned short)arg1 forName:(id)arg2;
- (void)updateBitmapInfo;
- (void)setColor:(struct _rgbquad)arg1 forName:(const char *)arg2 excludeFromFilter:(_Bool)arg3;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)removeAssetForKey:(id)arg1;
- (_Bool)removeAssetName:(id)arg1;
- (void)setRenditionKey:(const struct _renditionkeytoken *)arg1 hotSpot:(struct CGPoint)arg2 forName:(const char *)arg3;
- (_Bool)writeToDisk;

@end
