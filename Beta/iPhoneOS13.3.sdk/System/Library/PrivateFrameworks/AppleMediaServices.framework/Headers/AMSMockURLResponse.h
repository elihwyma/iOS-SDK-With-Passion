/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSURLRequest, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSMockURLResponse : NSObject

{
    _Bool _performActualRequest;
    unsigned long long _statusCode;
    NSDictionary *_headers;
    NSData *_body;
    NSURLRequest *_originalRequest;
    NSMutableArray *_responseHandlerBlocks;
    NSURLSessionTask *_runningTask;
}

@property (retain, nonatomic) NSMutableArray *responseHandlerBlocks;
@property (retain, nonatomic) NSURLSessionTask *runningTask;
@property (nonatomic) unsigned long long statusCode;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSData *body;
@property (nonatomic) _Bool performActualRequest;
@property (nonatomic, readonly) NSURLRequest *originalRequest;

+ (id)responseFromActualResponse;
+ (id)responseWithStatus:(unsigned long long)arg1 headers:(id)arg2 body:(id)arg3;
+ (id)responseWithHARFile:(id)arg1;

- (id)init;
- (CDStruct_0f015c83)handleReceivedRequest:(id)arg1;
- (void)addResponseHandler:(CDUnknownBlockType)arg1;
- (void)stopRunningTasks;

@end
