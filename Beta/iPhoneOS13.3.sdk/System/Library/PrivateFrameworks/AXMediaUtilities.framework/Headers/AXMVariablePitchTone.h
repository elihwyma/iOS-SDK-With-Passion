/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTone.h>

@interface AXMVariablePitchTone : AXMTone

- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned long long)arg2;
- (id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (unsigned long long)_bufferFrameForKeyPitch:(id)arg1;

@end
