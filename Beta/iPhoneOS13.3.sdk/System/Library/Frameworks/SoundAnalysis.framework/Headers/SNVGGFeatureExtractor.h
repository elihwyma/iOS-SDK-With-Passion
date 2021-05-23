/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModel, NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNVGGFeatureExtractor : NSObject

{
    shared_ptr_f6ac7592 _graph;
    MLModel *_mlModel;
    SNSystemConfiguration *_systemConfiguration;
    float _overlapFactor;
    long long _featurePrintType;
}

@property (nonatomic) long long featurePrintType;
@property (nonatomic) float overlapFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

- (id)init;
- (id).cxx_construct;
- (id)mlModel;
- (void)updateGraph;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;

@end
