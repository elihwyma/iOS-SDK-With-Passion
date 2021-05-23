/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKTrafficFeature.h>

@class NSString;

@interface VKTrafficCameraFeature : VKTrafficFeature

{
    long long _type;
    _Bool _isAboveSpeedThreshold;
    unsigned int _speedLimit;
    NSString *_speedLimitText;
    unsigned int _speedThreshold;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned int speedThreshold;
@property (nonatomic) _Bool isAboveSpeedThreshold;
@property (nonatomic, readonly) NSString *speedLimitText;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSpeedLimitCamera;
- (id)initWithTrafficCamera:(id)arg1;

@end
