/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTone.h>

@interface AXMSinglePitchTone : AXMTone

- (id)initWithFrequency:(double)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned long long)arg2;

@end
