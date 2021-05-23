/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSHTTPURLResponse, NSString, NSURL, SSMetricsPageEvent;

@interface SSURLConnectionResponse : NSObject

{
    NSData *_bodyData;
    SSMetricsPageEvent *_metricsPageEvent;
    NSHTTPURLResponse *_urlResponse;
}

@property (nonatomic, readonly) _Bool ssv_isExpiredResponse;
@property (nonatomic, readonly) NSData *databaseEncoding;
@property (retain, nonatomic) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic, readonly) NSString *storeCorrelationID;
@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;
@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) long long expectedContentLength;
@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSString *suggestedFilename;
@property (nonatomic, readonly) NSString *textEncodingName;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)statusCode;
- (id)allHeaderFields;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)initWithDatabaseEncoding:(id)arg1;

@end
