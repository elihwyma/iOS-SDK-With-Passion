/*
 Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface OspreyRequest : NSObject

{
    _Bool _useCompression;
    _Bool _forceHTTPv2;
    NSString *_methodName;
    NSData *_data;
    NSDictionary *_headers;
    NSData *_absintheSigningData;
    NSString *_clientTraceId;
    NSString *_userAgent;
}

@property (nonatomic, readonly) NSString *methodName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSData *absintheSigningData;
@property (nonatomic) _Bool useCompression;
@property (nonatomic) _Bool forceHTTPv2;
@property (copy, nonatomic) NSString *clientTraceId;
@property (nonatomic, readonly) NSString *userAgent;

+ (void)initialize;
+ (id)requestWithMethodName:(id)arg1;

- (id)_createUserAgentString;
- (id)initWithMethodName:(id)arg1;
- (id)grpcRequestWithBaseURL:(id)arg1;

@end
