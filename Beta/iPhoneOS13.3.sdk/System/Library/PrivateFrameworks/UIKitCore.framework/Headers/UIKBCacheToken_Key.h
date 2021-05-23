/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBCacheToken_Key : UIKBCacheToken

{
    CDUnion_bf7716c0 _style;
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    NSString *_annotationString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize _size;
    int _state;
    unsigned long long _clipCorners;
    unsigned long long _groupNeighbors;
    _Bool _usesInsets;
    struct UIEdgeInsets _displayInsets;
}

+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2;
+ (id)tokenForKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;

- (id)string;
- (void)dealloc;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (CDStruct_227bb23d)styling;
- (void)setStyling:(CDStruct_227bb23d)arg1;
- (int)rowHint;
- (void)setRowHint:(int)arg1;
- (int)displayHint;
- (void)setDisplayHint:(int)arg1;
- (_Bool)hasKey;
- (void)resetAnnotations;
- (void)annotateWithBool:(_Bool)arg1;
- (void)annotateWithInt:(int)arg1;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;
- (id)_initWithKey:(id)arg1 style:(CDStruct_227bb23d)arg2 displayInsets:(struct UIEdgeInsets)arg3;
- (void)annotateWithString:(id)arg1;
- (id)_stringWithAdditionalValues:(CDUnknownBlockType)arg1;

@end
