/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURLSession, NSURLSessionDataTask;

@protocol NSURLSessionDataDelegate;

@interface YahooDoppelganger : NSObject

{
    NSString *_expectedRequestPattern;
    NSData *_response;
    unsigned long long _responseChunkSize;
    unsigned long long _responseChunkDelay;
    unsigned long long _responseChunkInitialDelay;
    unsigned long long _responseOffset;
    _Bool _cancelled;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    id <NSURLSessionDataDelegate> _delegate;
}

@property (retain, nonatomic) NSString *expectedRequestPattern;
@property (retain, nonatomic) NSData *response;
@property (nonatomic) unsigned long long responseChunkSize;
@property (nonatomic) unsigned long long responseChunkDelay;
@property (nonatomic) unsigned long long responseChunkInitialDelay;
@property (weak, nonatomic) id <NSURLSessionDataDelegate> delegate;

+ (_Bool)canHandleRequest:(id)arg1;
+ (void)hookIntoYQLRequestIfNeeded;
+ (id)newDoppelgangerMatchingRequestPattern:(id)arg1;
+ (void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2;
+ (void)_doppelgangerFinished:(id)arg1;
+ (void)setTestHarness:(id)arg1;
+ (id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2;
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(_Bool)arg2;
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2;
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2;
+ (void)spewDoppelgangerData;
+ (void)clearDoppelgangerData;
+ (_Bool)waitForAllDoppelgangersUpToTimeout:(double)arg1;

- (id)init;
- (id)description;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)resume;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)matchesRequest:(id)arg1;
- (void)_relayDataChunk;

@end
