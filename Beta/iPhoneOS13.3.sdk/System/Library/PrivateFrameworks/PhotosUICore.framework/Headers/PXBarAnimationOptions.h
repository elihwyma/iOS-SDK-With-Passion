/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXBarAnimationOptions : NSObject <Swift>

{
    long long _type;
    double _duration;
}

@property (nonatomic) long long type;
@property (nonatomic) double duration;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 duration:(double)arg2;

@end
