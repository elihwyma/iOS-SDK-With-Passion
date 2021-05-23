/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNAudioOffsetEstimator : NSObject

{
    shared_ptr_f6ac7592 _graph;
    double _minimumObservableOffset;
    double _maximumObservableOffset;
}

@property (nonatomic, readonly) double offset;
@property (nonatomic) double minimumObservableOffset;
@property (nonatomic) double maximumObservableOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

- (id)init;
- (id).cxx_construct;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (shared_ptr_f6ac7592)createGraph;
- (void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4;

@end
