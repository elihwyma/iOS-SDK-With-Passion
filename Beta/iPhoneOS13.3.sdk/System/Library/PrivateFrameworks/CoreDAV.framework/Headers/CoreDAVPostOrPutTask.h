/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask

{
    _Bool _forceToServer;
    NSString *_previousETag;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    _Bool _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property (retain, nonatomic) NSString *requestDataContentType;
@property (retain, nonatomic) NSData *requestDataPayload;
@property (nonatomic) _Bool forceToServer;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSString *previousETag;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

@end
