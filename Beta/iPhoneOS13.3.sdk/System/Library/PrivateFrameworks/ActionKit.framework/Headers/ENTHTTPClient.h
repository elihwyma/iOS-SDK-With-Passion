/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSString, NSURL;

@interface ENTHTTPClient : NSObject

{
    int _responseDataOffset;
    int _timeout;
    NSURL *_url;
    NSMutableData *_requestData;
    NSData *_responseData;
    NSString *_userAgent;
}

@property (retain, nonatomic) NSMutableData *requestData;
@property (retain, nonatomic) NSData *responseData;
@property (nonatomic) int responseDataOffset;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) int timeout;
@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)cancel;
- (void)flush;
- (id)newRequest;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3;

@end
