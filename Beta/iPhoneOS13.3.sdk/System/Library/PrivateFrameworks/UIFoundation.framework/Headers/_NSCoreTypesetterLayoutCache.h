/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSCoreTypesetterLayoutCache : NSObject

{
    unsigned long long _count;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    double _elasticAdvances;
    struct __CTFont *_resolvedFont;
    long long _textAlignment;
    struct __CTLine *_line;
}

@property (retain, nonatomic) struct __CTLine *CTLine;

- (void)dealloc;
- (void)setCount:(unsigned long long)arg1 glyphs:(const unsigned short *)arg2 advances:(const struct CGSize *)arg3 elasticAdvances:(double)arg4 resolvedFont:(struct __CTFont *)arg5 textAlignment:(long long)arg6;
- (_Bool)getCount:(unsigned long long *)arg1 glyphs:(const unsigned short **)arg2 advances:(const struct CGSize **)arg3 elasticAdvances:(double *)arg4 resolvedFont:(const struct __CTFont **)arg5 textAlignment:(long long *)arg6;

@end
