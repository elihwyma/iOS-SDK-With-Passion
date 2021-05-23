/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@interface TVPMediaItemSkipInfo : NSObject

{
    unsigned long long _type;
    double _start;
    double _duration;
    double _target;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double target;

- (id)description;
- (id)_typeDescription;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4;

@end
