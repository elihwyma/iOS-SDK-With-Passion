/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLGaussianSampler : NSObject

{
    CDStruct_9981aeec _rng;
    float _magnitude;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (float)sample;
- (id)initWithMagnitude:(float)arg1;
- (id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2;

@end
