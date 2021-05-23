/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSString, NSURL;

@interface OSASubmitter : NSObject

{
    long long _responseCode;
    NSData *_responseData;
    NSDictionary *_responseHeaders;
    NSError *_responseError;
    _Bool _dryRun;
    unsigned int _jobCount;
    _Bool _allowUnsignedBlobs;
    NSArray *_internalWhitelist;
    NSString *_connectionType;
    NSDictionary *_launchInfo;
}

@property _Bool allowUnsignedBlobs;
@property (copy) NSArray *internalWhitelist;
@property (copy) NSString *connectionType;
@property (readonly) NSURL *submissionURL;
@property (copy) NSDictionary *launchInfo;

+ (id)extractAuthenticatedBlob:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)abort;
- (id)locateLog:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)processJob:(id)arg1 forRouting:(id)arg2 including:(id)arg3 usingConfig:(id)arg4 taskings:(id)arg5 summarize:(id)arg6;
- (void)prefaceSubmission:(id)arg1 withData:(id)arg2 usingArchive:(id)arg3 andHeaders:(id)arg4;
- (void)postContent:(id)arg1 withHeaders:(id)arg2;
- (id)applyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;
- (id)processSubmissionJobs:(id)arg1 usingConfig:(id)arg2 summarize:(id)arg3;
- (void)prepConfig:(id)arg1;
- (_Bool)cheaterTaskingWithSets:(id)arg1 usingConfig:(id)arg2 resultsCallback:(CDUnknownBlockType)arg3;
- (_Bool)submitLogsUsingPolicy:(id)arg1 resultsCallback:(CDUnknownBlockType)arg2;

@end
