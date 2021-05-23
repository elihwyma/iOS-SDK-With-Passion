/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface FigPhotoTile : NSObject

{
    _Bool _visible;
    struct __IOSurface *_decodedSurface;
    id _key;
    struct CGRect _imageRect;
    struct CGRect _contentsRect;
}

@property (nonatomic) struct __IOSurface *decodedSurface;
@property (nonatomic) struct CGRect imageRect;
@property (nonatomic) struct CGRect contentsRect;
@property (retain, nonatomic) id key;
@property (nonatomic) _Bool visible;

- (void)dealloc;
- (id)description;

@end
