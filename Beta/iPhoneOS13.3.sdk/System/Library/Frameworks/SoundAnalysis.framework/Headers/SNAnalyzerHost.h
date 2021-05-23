/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString;

@protocol SNAnalyzerProviding, SNAnalyzing, SNResultsGating, SNResultsObserving, SNTimeConverting;

__attribute__((visibility("hidden")))
@interface SNAnalyzerHost : NSObject <Swift>

{
    id <SNAnalyzerProviding> _request;
    id <SNAnalyzing> _analyzer;
    id <SNTimeConverting> _timeConverter;
    id <SNResultsObserving> _resultsObserver;
    id <SNResultsGating> _resultsGater;
    long long _requestState;
}

@property (nonatomic, readonly) id sharedProcessorConfiguration;
@property (nonatomic) long long requestState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;

- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithRequest:(id)arg1 resultsObserver:(id)arg2 timeConverter:(id)arg3 resultsGater:(id)arg4;
- (void)handleAnalyzerCompletion;
- (void)handleAnalyzerError:(id)arg1;
- (id)clientResultsFromProcessorResults:(id)arg1;
- (void)requestDidReturnError:(id)arg1;
- (void)primeAnalyzerGraph;

@end
