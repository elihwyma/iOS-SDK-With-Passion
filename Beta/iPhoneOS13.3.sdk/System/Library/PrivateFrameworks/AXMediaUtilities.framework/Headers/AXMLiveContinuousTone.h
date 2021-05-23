/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMTone.h>

@interface AXMLiveContinuousTone : AXMTone

{
    _Bool _muted;
    _Bool _releasing;
    double _phase;
    unsigned long long _framesRendered;
    unsigned long long _releaseFrame;
}

@property (nonatomic, readonly) double phase;
@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) _Bool releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) _Bool muted;

- (void)setFrequency:(double)arg1;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)startRelease;
- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned long long)arg2 numSamples:(unsigned long long)arg3;
- (void)resetRelease;

@end
