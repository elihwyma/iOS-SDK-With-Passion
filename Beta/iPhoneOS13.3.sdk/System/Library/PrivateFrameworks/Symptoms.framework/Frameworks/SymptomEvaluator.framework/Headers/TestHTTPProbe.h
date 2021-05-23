/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSString, NSURL, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface TestHTTPProbe : TestProbe

{
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlSessionTask;
    NSURL *_urlToTest;
}

@property (retain, nonatomic) NSURL *urlToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)stopTest;
- (void)testURL:(id)arg1 timeout:(double)arg2 interfaceName:(id)arg3 userAgent:(id)arg4 reply:(CDUnknownBlockType)arg5;

@end
