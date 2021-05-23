/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSTimer, WBSSiteMetadataRequest;

@interface _WBSSiteMetadataToken : NSObject

{
    _Bool _isOneTimeRequest;
    _Bool _didReceiveResponse;
    WBSSiteMetadataRequest *_request;
    long long _priority;
    CDUnknownBlockType _responseHandler;
    NSTimer *_delayTimer;
}

@property (nonatomic, readonly) _Bool isOneTimeRequest;
@property (nonatomic, readonly) WBSSiteMetadataRequest *request;
@property (nonatomic) long long priority;
@property (copy, nonatomic, readonly) CDUnknownBlockType responseHandler;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) _Bool didReceiveResponse;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)dispatchResponse:(id)arg1;

@end
