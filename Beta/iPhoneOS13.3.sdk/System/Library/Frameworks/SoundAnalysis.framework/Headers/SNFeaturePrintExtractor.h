/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModel, MLModelDescription, NSString, SNSystemConfiguration;

@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface SNFeaturePrintExtractor : NSObject

{
    shared_ptr_f6ac7592 _graph;
    id <MLCustomModel> _logMelSpectrogramModel;
    MLModelDescription *_logMelSpectrogramModelDescription;
    MLModel *_featureEmbeddingModel;
    SNSystemConfiguration *_systemConfiguration;
    int _timeDomainBlockSize;
    int _resultsToDiscardCount;
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
- (id)embeddingModel;
- (void)updateGraph;
- (id)logMelSpectrogramModel;
- (id)logMelSpectrogramModelDescription;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;

@end
