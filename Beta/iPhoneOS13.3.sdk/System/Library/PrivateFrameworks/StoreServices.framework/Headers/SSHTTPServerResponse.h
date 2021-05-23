/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject

{
    short _statusCode;
    NSData *_body;
    NSDictionary *_headers;
}

@property (retain, nonatomic) NSData *body;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) short statusCode;

- (id)initWithStatusCode:(short)arg1;
- (void)setBodyWithBag:(id)arg1;
- (id)bagFromBody;
- (struct __CFHTTPMessage *)copyHTTPMessage;

@end
