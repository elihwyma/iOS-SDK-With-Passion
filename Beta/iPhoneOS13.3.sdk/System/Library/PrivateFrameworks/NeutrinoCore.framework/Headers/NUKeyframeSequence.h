/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface NUKeyframeSequence : NSObject

{
    unsigned long long _count;
    CDStruct_1b6d18a9 *_times;
    _Bool _ownsTimes;
    long long _interpolation;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long interpolation;

- (id)init;
- (void)dealloc;
- (id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(CDStruct_1b6d18a9 *)arg3;
- (id)initWithKeyframeSequence:(id)arg1;
- (long long)indexOfKeyframeAtOrBeforeTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeOfKeyframeAtIndex:(long long)arg1;
- (MISSING_TYPE *)interpolantAtTime:(CDStruct_1b6d18a9)arg1;
- (id)sparseSequence;

@end
