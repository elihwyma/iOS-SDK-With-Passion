/*
 Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <CoreText/_CTGlyphStorage.h>

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage

{
    const long long *_attachCounts;
    const struct CGPoint *_origins;
    unsigned long long _retainCount;
    struct GlyphStack *_stack;
    long long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long long)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (struct CGPoint)originAtIndex:(long long)arg1;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)popGlyphAtIndex:(long long)arg1;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (_Bool)implementsOrigins;
- (id)initWithCount:(long long)arg1;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (id)prepareWithCapacity:(long long)arg1 preallocated:(_Bool)arg2;
- (void)setCapacity:(long long)arg1;

@end
