/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSError, SNAnalyzerHost;

@protocol SNAnalyzerProviding, SNProcessing, SNResultsObserving;

__attribute__((visibility("hidden")))
@interface SNAnalyzerInfo : NSObject

{
    _Bool _configured;
    id <SNAnalyzerProviding> _request;
    id <SNResultsObserving> _resultsObserver;
    SNAnalyzerHost *_analyzerHost;
    id <SNProcessing> _sharedProcessor;
    NSError *_configurationError;
}

@property (retain, nonatomic) id <SNAnalyzerProviding> request;
@property (weak, nonatomic) id <SNResultsObserving> resultsObserver;
@property (retain, nonatomic) SNAnalyzerHost *analyzerHost;
@property (retain, nonatomic) id <SNProcessing> sharedProcessor;
@property (nonatomic) _Bool configured;
@property (retain, nonatomic) NSError *configurationError;

@end
