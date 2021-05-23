/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString, UIFont, UIFontDescriptor;

@interface TMLFont : NSObject

{
    UIFont *_font;
    UIFontDescriptor *_fontDescriptor;
}

@property (nonatomic, readonly) struct CGFont *CGFontRef;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double xHeight;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double leading;

+ (void)initializeJSContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (id)initWithFont:(id)arg1;
- (id)bold;
- (id)italic;
- (id)withWidth:(double)arg1;
- (id)UIFontValue;
- (id)withSize:(double)arg1;
- (id)withFamily:(id)arg1;
- (id)withWeight:(double)arg1;
- (id)withSymbolicTraits:(unsigned int)arg1;
- (id)withAttributes:(id)arg1;
- (id)withStyle:(id)arg1;
- (id)withAXRestrictedStyle:(id)arg1;
- (id)withScale:(double)arg1;
- (id)withScaleTransform:(double)arg1;

@end
