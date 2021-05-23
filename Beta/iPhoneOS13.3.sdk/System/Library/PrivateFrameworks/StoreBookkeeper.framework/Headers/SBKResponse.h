/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, SBKResponseStatus;

__attribute__((visibility("hidden")))
@interface SBKResponse : NSObject

{
    NSDictionary *_responseDictionary;
    unsigned long long _responseCode;
    NSDictionary *_responseHeaderFields;
    NSError *_error;
    double _retrySeconds;
    NSString *_MIMEType;
    SBKResponseStatus *_responseStatus;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) SBKResponseStatus *responseStatus;
@property (nonatomic, readonly) unsigned long long responseCode;
@property (nonatomic, readonly) NSDictionary *responseHeaderFields;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSError *error;
@property (readonly) long long statusCode;
@property (copy, readonly) NSString *consoleDescription;
@property (readonly) NSError *requestError;
@property (readonly) _Bool isSuccess;
@property (readonly) _Bool isRecoverable;
@property (readonly) _Bool isError;
@property (readonly) _Bool shouldFileRadar;
@property (readonly) _Bool isGenericError;
@property (readonly) _Bool isUnsupportedClient;
@property (readonly) _Bool isAuthenticationError;
@property (readonly) _Bool isValidationError;
@property (readonly) _Bool isPuntedError;
@property (readonly) double retrySeconds;

+ (id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2;
+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;

- (id)description;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2;

@end
