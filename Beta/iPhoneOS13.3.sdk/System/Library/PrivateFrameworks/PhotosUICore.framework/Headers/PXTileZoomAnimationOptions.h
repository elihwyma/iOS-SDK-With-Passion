/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXTileZoomAnimationOptions : NSObject <Swift>

{
    _Bool _shouldCrossfade;
    long long _transformType;
    unsigned long long _flags;
}

@property (nonatomic) long long transformType;
@property (nonatomic) _Bool shouldCrossfade;
@property (nonatomic) unsigned long long flags;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
