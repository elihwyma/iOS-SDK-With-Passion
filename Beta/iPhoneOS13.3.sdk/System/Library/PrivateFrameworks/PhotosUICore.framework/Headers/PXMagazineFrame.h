/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXMagazineFrame : NSObject

{
    long long _width;
    long long _height;
    double _aspectRatio;
    double _minAspectRatio;
    double _maxAspectRatio;
}

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic, readonly) long long numberOfTiles;
@property (nonatomic) double aspectRatio;
@property (nonatomic) double minAspectRatio;
@property (nonatomic) double maxAspectRatio;

- (id)description;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end
