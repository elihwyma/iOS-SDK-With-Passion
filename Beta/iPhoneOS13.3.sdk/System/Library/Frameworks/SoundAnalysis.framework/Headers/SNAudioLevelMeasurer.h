/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNAudioLevelMeasurer : NSObject

{
    SNSystemConfiguration *_systemConfiguration;
    shared_ptr_f6ac7592 _graph;
    float _inputSensitivity;
}

@property (nonatomic, readonly) float inputSensitivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

- (id).cxx_construct;
- (void)updateGraph;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (id)initWithInputSensitivity:(float)arg1;

@end
