/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <FMCore/FMCommandBase.h>

@class NSDictionary, NSError, NSObject;

@protocol OS_dispatch_queue;

@interface FMJSONCommand : FMCommandBase

{
    _Bool __hasParsedResponseBody;
    NSError *_jsonResponseParseError;
    NSDictionary *__responseBodyDict;
    NSDictionary *__requestBodyDict;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property (nonatomic) _Bool _hasParsedResponseBody;
@property (retain, nonatomic) NSDictionary *_responseBodyDict;
@property (retain, nonatomic) NSDictionary *_requestBodyDict;
@property (retain, nonatomic) NSError *jsonResponseParseError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic, readonly) NSDictionary *jsonResponseDictionary;
@property (nonatomic, readonly) NSDictionary *serverAlertInfo;

- (id)init;
- (id)body;
- (id)headers;
- (void)sendRequest;
- (id)jsonBodyDictionary;

@end
