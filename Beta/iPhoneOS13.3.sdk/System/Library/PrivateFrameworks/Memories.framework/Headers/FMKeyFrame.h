/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@interface FMKeyFrame : NSObject

{
    float _value;
    long long _sampleTime;
}

@property (nonatomic) long long sampleTime;
@property (nonatomic) float value;

- (id)description;
- (id)initWithValue:(float)arg1 atTime:(long long)arg2;

@end
