/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISDataProvider.h>

@class SUImageModifier, UIColor;

@interface SUImageDataProvider : ISDataProvider

{
    UIColor *_fillColor;
    struct CGSize _finalSize;
    double _inputImageScale;
    SUImageModifier *_modifier;
}

@property (retain) UIColor *fillColor;
@property struct CGSize finalSize;
@property double inputImageScale;
@property (retain) SUImageModifier *modifier;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (void)_getFinalSize:(struct CGSize *)arg1 imageFrame:(struct CGRect *)arg2 forImage:(id)arg3 withModifier:(id)arg4;
- (id)newImageFromImage:(id)arg1;

@end
