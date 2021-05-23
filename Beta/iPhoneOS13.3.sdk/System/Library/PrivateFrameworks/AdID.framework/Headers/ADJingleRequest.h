/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString;

@interface ADJingleRequest : NSObject

{
    NSNumber *_token;
    NSData *_responseBody;
    NSDictionary *_responseHeaders;
    NSError *_error;
    long long _statusCode;
    NSString *_DSID;
    CDUnknownBlockType _completionHandler;
    NSString *_bagKey;
    NSData *_requestBody;
    NSMutableDictionary *_requestHeaders;
}

@property (retain, nonatomic) NSNumber *token;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSString *bagKey;
@property (retain, nonatomic) NSData *requestBody;
@property (retain, nonatomic) NSMutableDictionary *requestHeaders;
@property (retain) NSData *responseBody;
@property (retain) NSDictionary *responseHeaders;
@property (copy) NSError *error;
@property long long statusCode;
@property (copy, nonatomic) NSString *DSID;

+ (id)incrementToken;

- (void)send;
- (void)handleJingleResponse;
- (void)sendJingleRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
