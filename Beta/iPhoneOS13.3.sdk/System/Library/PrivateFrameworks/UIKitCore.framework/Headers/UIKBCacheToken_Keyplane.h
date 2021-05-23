/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Keyplane : UIKBCacheToken

{
    struct CGSize _size;
    CDUnion_bf7716c0 _style;
    NSString *_geometrySetName;
    NSString *_keySetName;
    NSString *_cachedGestureKeySetName;
    NSString *_annotations;
    NSString *_locale;
}

+ (id)tokenForKeyplane:(id)arg1;

- (void)dealloc;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (CDStruct_227bb23d)styling;
- (void)setStyling:(CDStruct_227bb23d)arg1;
- (_Bool)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2;
- (void)annotateWithBool:(_Bool)arg1;
- (void)annotateWithInt:(int)arg1;
- (id)stringForSplitState:(_Bool)arg1 handBias:(long long)arg2;
- (id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2;

@end
