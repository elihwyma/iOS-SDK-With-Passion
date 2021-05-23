/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SNVGGBasedDetectorConfiguration;

__attribute__((visibility("hidden")))
@interface SNVGGBasedDetector : NSObject

{
    SNVGGBasedDetectorConfiguration *_configuration;
    NSString *_detectorBoxName;
    shared_ptr_f6ac7592 _graph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

+ (void)completeTimingInfoInResult:(id)arg1 usingBox:(struct Box *)arg2;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (void)updateGraph;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;
- (id)detectionResultsFromBox:(struct CoreMLBox *)arg1 coreMLInfo:(id)arg2 features:(id)arg3;
- (id)classificationResultsFromBox:(struct CoreMLBox *)arg1 coreMLInfo:(id)arg2 features:(id)arg3;

@end
