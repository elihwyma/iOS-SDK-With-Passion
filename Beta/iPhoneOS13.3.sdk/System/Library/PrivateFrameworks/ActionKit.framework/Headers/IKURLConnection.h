/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <CFNetwork/NSURLConnection.h>

@class NSData, NSHTTPURLResponse, NSMutableData, NSURLRequest;

@interface IKURLConnection : NSURLConnection

{
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSMutableData *_data;
    id _userInfo;
    int _type;
    id _context;
}

@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) int type;

- (void)dealloc;
- (void)_setContext:(id)arg1;
- (id)_context;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(_Bool)arg3;
- (void)_setType:(int)arg1;
- (void)_setResponse:(id)arg1;
- (void)_appendData:(id)arg1;
- (void)_setUserInfo:(id)arg1;

@end
