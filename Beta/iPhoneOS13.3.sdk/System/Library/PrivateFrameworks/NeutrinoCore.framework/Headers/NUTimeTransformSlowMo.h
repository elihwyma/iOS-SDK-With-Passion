/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGeometryTransform.h>

@protocol NUSlowMotionTimeRangeMapper;

@interface NUTimeTransformSlowMo : NUGeometryTransform

{
    _Bool _isInverse;
    id <NUSlowMotionTimeRangeMapper> _timeMapper;
}

@property (nonatomic, readonly) _Bool isInverse;
@property (nonatomic, readonly) id <NUSlowMotionTimeRangeMapper> timeMapper;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)inverseTransform;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithSlowMoBeginTime:(CDStruct_1b6d18a9)arg1 endTime:(CDStruct_1b6d18a9)arg2 rate:(float)arg3 assetDuration:(double)arg4;
- (id)initWithSlowMoTimeMapper:(id)arg1 isInverse:(_Bool)arg2;

@end
