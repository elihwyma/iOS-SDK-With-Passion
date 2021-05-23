/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPFetcherConfiguration, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPFetcherGroup : NSObject

{
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_tasks;
    _Bool _doneAddingFetchers;
    _Bool _done;
    unsigned int _loggingID;
}

- (void)cancel;
- (void)_completed;
- (void)startFetchesIfNeeded;
- (void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfActiveFetches;
- (void)evaluateCompleteness;
- (id)_responsesRespectingPolicy;
- (id)initWithPolicy:(long long)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)appendFetcher:(id)arg1;
- (void)prependFetcher:(id)arg1;
- (void)doneAddingFetchers;

@end
