/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SLFacebookResponse : NSObject <Swift>

{
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    long long _httpErrorCode;
}

@property (readonly) NSDictionary *responseParameters;
@property (readonly) int APIresponseErrorCode;
@property (readonly) long long httpErrorCode;
@property (readonly) NSHTTPURLResponse *urlResponse;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasError;
- (_Bool)hasBadTokenError;
- (id)untypedResponseParameters;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;
- (_Bool)hasHTTPStatusOK;
- (_Bool)isBatchResponse;
- (long long)httpStatusCode;
- (_Bool)hasMissingTokenOrAppID;
- (id)checkpointURL;
- (id)failedRequestIDs;

@end
