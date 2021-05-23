/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIStructuredThemeStore.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore

{
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_apperanceNameIdentifierStore;
    int _maxApperanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)imagesWithName:(id)arg1;
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (id)allImageNames;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)keyFormat;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;
- (id)defaultAppearanceName;
- (struct _renditionkeytoken *)renditionKeyForAssetWithName:(id)arg1 withDescription:(id)arg2;
- (void)_addRenditionInfoForImageWithName:(id)arg1 andKey:(struct _renditionkeytoken *)arg2;
- (void)_removeRenditionInfoForImageWithName:(id)arg1;
- (void)clearRenditionCache;
- (long long)maximumRenditionKeyTokenCount;
- (_Bool)usesCUISystemThemeRenditionKey;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)appearances;

@end
