/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup

{
    double _scale;
    struct _cuintproperties {
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isOpaque:1;
        unsigned int _reserved:26;
    } _textureProperties;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) _Bool isOpaque;
@property (nonatomic, readonly) _Bool isAlphaCropped;

- (id)description;
- (_Bool)_cacheRenditionProperties;
- (struct CGRect)alphaCroppedRect;
- (id)textureWithBufferAllocator:(id)arg1;

@end
