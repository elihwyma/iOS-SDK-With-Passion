/*
 Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject

{
    long long _count;
    const unsigned short *_glyphs;
    const struct CGSize *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (_Bool)isEqual:(id)arg1;
- (struct CGPoint)originAtIndex:(long long)arg1;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)disposeGlyphStack;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (_Bool)implementsOrigins;
- (id)initWithCount:(long long)arg1;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (void *)refCon;
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)sync;

@end
