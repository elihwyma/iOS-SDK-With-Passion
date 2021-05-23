/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@interface FlexMLGainValue : NSObject

{
    float _gain;
    CDStruct_1b6d18a9 _segmentTime;
}

@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) CDStruct_1b6d18a9 segmentTime;

- (long long)compare:(id)arg1;
- (id)initWithGain:(float)arg1 segmentTime:(CDStruct_1b6d18a9)arg2;

@end
