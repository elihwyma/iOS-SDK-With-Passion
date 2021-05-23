/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXBasicTileAnimationOptions : NSObject <Swift>

{
    _Bool _shouldNotifyTiles;
    _Bool _shouldSnapshotDynamicContents;
    double _delay;
    double _duration;
    long long _style;
    unsigned long long _flags;
}

@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) long long style;
@property (nonatomic) _Bool shouldNotifyTiles;
@property (nonatomic) _Bool shouldSnapshotDynamicContents;
@property (nonatomic) unsigned long long flags;

+ (id)defaultAnimationOptions;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
