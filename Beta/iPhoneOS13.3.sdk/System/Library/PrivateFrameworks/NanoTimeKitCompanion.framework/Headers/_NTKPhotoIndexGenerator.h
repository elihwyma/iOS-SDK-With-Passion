/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _NTKPhotoIndexGenerator : NSObject

{
    long long _n;
    long long _count;
    long long _prevIndex;
    long long _step;
    NSArray *_stepSizes;
}

- (void)reset;
- (void)setIndex:(long long)arg1;
- (id)initWithSize:(long long)arg1;
- (long long)nextRandom;
- (long long)nextSequential;

@end
