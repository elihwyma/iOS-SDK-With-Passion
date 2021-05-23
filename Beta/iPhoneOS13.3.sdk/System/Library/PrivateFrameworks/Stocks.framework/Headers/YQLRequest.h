/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface YQLRequest : NSObject

{
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldGenerateOfflineData;
+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)parseData:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)loadRequest:(id)arg1;
- (_Bool)isLoading;
- (void)didParseData;
- (id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;
- (void)cancelAndInvalidate;
- (id)YQLLanguageCode;
- (id)YQLCountryCode;
- (void)failToParseWithData:(id)arg1;
- (id)aggregateDictionaryDomain;
- (void)failToParseWithDataSeriesDictionary:(id)arg1;
- (void)_createDefaultSession;
- (void)_loadDefaultSessionIfNeeded;

@end
