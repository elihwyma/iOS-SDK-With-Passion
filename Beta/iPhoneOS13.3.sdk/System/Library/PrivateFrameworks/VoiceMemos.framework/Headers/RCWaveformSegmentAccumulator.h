/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, RCWaveformGenerator;

@interface RCWaveformSegmentAccumulator : NSObject

{
    _Bool _finishedSuccessfully;
    RCWaveformGenerator *_generator;
    NSMutableArray *_segments;
}

@property (retain, nonatomic) RCWaveformGenerator *generator;
@property (retain, nonatomic) NSMutableArray *segments;
@property (nonatomic, readonly) _Bool finishedSuccessfully;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)waitUntilFinished;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (id)initWithWaveformGenerator:(id)arg1;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;

@end
