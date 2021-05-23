/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXMosaicGalleryLayoutItem : NSObject

{
    int _tileType;
    struct CGSize _dimensions;
}

@property (nonatomic, readonly) struct CGSize dimensions;
@property (nonatomic, readonly) int tileType;

- (id)description;
- (id)initWithDimensions:(struct CGSize)arg1;
- (double)aspectRatio;

@end
