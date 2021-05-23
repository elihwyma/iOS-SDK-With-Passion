/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup

{
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray *_atlasImages;
}

@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) struct __CFArray *images;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) NSArray *imageNames;
@property (nonatomic, readonly) _Bool completeTextureExtrusion;

- (void)dealloc;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;
- (_Bool)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6;
- (id)imageWithName:(id)arg1;

@end
