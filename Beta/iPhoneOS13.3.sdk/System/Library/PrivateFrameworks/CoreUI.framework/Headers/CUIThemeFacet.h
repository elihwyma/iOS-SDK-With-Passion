/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@class NSString;

@interface CUIThemeFacet : NSObject <Swift>

{
    struct _renditionkeytoken *_renditionKeyList;
    unsigned long long _themeIndex;
    long long _renditionType;
    struct CGSize _thumbnailSize;
    struct CGPoint _hotSpot;
    int _isTintable;
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
+ (void)_invalidateArtworkCaches;
+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (unsigned long long)themeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (void)themeUnregisterThemeRef:(unsigned long long)arg1;
+ (id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (_Bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)image;
- (double)alpha;
- (id)properties;
- (id)imageForState:(long long)arg1;
- (long long)controlSize;
- (void)setControlSize:(long long)arg1;
- (struct CGSize)imageSize;
- (int)blendMode;
- (id)thumbnail;
- (struct CGSize)thumbnailSize;
- (id)_rendition;
- (id)renditionKey;
- (_Bool)isTintable;
- (id)_themeStore;
- (unsigned long long)themeIndex;
- (id)imageForSliceIndex:(long long)arg1;
- (_Bool)_isButtonGlyph;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(_Bool)arg7 effects:(id)arg8;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
- (void)_initWithRenditionKey:(id)arg1;
- (void)_applyFixedAttributesToKey:(id)arg1;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;
- (void)updateLayer:(id)arg1 effects:(id)arg2;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;
- (id)_makeLayerFromCAPackageData;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;
- (id)blendModeAsCAFilterString;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 isFocused:(int)arg4 isFlipped:(_Bool)arg5 effects:(id)arg6;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;
- (id)themeRendition;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(_Bool *)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (_Bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize)arg2 isMask:(_Bool)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(struct CGContext *)arg6;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;
- (id)renditionForSpecificKeyWrapper:(id)arg1;
- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect)arg3 context:(struct CGContext *)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(_Bool)arg8 effects:(id)arg9;
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7 effects:(id)arg8;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (id)imageForState:(long long)arg1 value:(long long)arg2;
- (_Bool)isValidButtonImageSourceForSize:(unsigned long long)arg1;
- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;
- (double)alphaWithKeyAdjustment:(id)arg1;
- (int)blendModeWithKeyAdjustment:(id)arg1;
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1;
- (long long)renditionType;
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;
- (_Bool)hasValueSlices;
- (struct CGPoint)_hotSpot;
- (void)_setHasCheckedButtonGlyph:(_Bool)arg1;
- (void)_setIsButtonGlyph:(_Bool)arg1;
- (id)makeLayer;
- (void)updateLayer:(id)arg1;
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4;
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (struct CGImage *)copySegmentLayerContents:(int)arg1 andCenter:(struct CGRect *)arg2 leftSeparatorWidth:(double)arg3 rightSeparatorWidth:(double)arg4 renditionKey:(id)arg5 effects:(id)arg6;
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (_Bool)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext *)arg4;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;
- (_Bool)isValidButtonImageSource;
- (id)imageWithKeyAdjustment:(id)arg1;
- (struct CGSize)sizeForSegmentOfType:(int)arg1;
- (void)_setThemeIndex:(unsigned long long)arg1;
- (struct CGSize)topLeftCapSize;
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;

@end
