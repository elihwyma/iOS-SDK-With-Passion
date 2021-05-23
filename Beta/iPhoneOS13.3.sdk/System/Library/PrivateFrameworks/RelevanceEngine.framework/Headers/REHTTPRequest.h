/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSInputStream, NSMutableData, NSString, NSURL, REHTTPConnection;

@interface REHTTPRequest : NSObject

{
    struct _CFHTTPServerRequest *_request;
    NSInputStream *_stream;
    NSMutableData *_bodyData;
    REHTTPConnection *_connection;
    NSString *_method;
    NSURL *_url;
    NSDictionary *_headerFields;
}

@property (nonatomic, readonly) struct _CFHTTPServerRequest *request;
@property (nonatomic, readonly) NSInputStream *stream;
@property (nonatomic, readonly) REHTTPConnection *connection;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) NSData *bodyData;

- (void)dealloc;
- (void)appendData:(id)arg1;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithConnect:(id)arg1 request:(struct _CFHTTPServerRequest *)arg2;

@end
