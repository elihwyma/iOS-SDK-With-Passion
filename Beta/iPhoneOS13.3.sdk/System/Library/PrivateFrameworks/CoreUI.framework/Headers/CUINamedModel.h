/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class MDLAsset;

@interface CUINamedModel : CUINamedLookup

@property (nonatomic, readonly) MDLAsset *asset;

- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;

@end
