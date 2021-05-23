/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIFoundation/NSLayoutManager.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorLayoutManager : NSLayoutManager

{
    UIFont *_fontForExtraBulletRendering;
}

- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)resetFontForExtraBulletRendering;
- (long long)_generateBulletGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5 unobscuredRange:(struct _NSRange)arg6 obscuredLength:(long long)arg7 obscureExistingText:(_Bool)arg8;
- (struct CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(struct _NSRange)arg2;
- (void)_completeBulletRenderingForTextContainer:(id)arg1;
- (void)useFontForExtraBulletRendering:(id)arg1;

@end
