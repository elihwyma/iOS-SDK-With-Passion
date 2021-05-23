/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModel, NSString;

__attribute__((visibility("hidden")))
@interface SNSoundClassifier : NSObject

{
    MLModel *_model;
    shared_ptr_f6ac7592 _graph;
    int _modelBlockSize;
    int _resultsToDiscardCount;
    int _primeFrameCount;
    double _overlapFactor;
}

@property double overlapFactor;
@property (readonly) int primeFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

+ (id)new;
+ (void)completeTimingInfoInResult:(id)arg1 usingBox:(struct Box *)arg2 modelBlockSize:(long long)arg3;

- (id)init;
- (id).cxx_construct;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (void)primeGraph;

@end
