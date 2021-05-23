/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence

{
    CDStruct_d80e62f2 *_values;
}

- (void)dealloc;
- (CDStruct_d80e62f2)sampleAtTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_d80e62f2)valueOfKeyframeAtIndex:(long long)arg1;
- (id)initWithCount:(unsigned long long)arg1 times:(CDStruct_1b6d18a9 *)arg2 values:(CDStruct_d80e62f2 *)arg3;

@end
