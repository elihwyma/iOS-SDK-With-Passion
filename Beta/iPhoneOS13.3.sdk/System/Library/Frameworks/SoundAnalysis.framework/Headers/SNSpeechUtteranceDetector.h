/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNSpeechUtteranceDetector : NSObject

{
    SNSystemConfiguration *_systemConfiguration;
    long long _requestType;
    shared_ptr_f6ac7592 _graph;
}

@property (nonatomic, readonly) _Bool hardVAD;
@property (readonly) double decisionDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

- (id)init;
- (id).cxx_construct;
- (id)initWithRequestType:(long long)arg1;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (shared_ptr_f6ac7592)createGraph;
- (float)softVAD;

@end
