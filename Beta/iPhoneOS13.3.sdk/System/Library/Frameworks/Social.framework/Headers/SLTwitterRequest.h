/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, OACredential;

@protocol SLTimestampSkewStorageDelegate;

@interface SLTwitterRequest : NSObject

{
    ACAccount *_account;
    OACredential *_credential;
    int _callingPID;
    NSObject<SLTimestampSkewStorageDelegate> *_timestampSkewStorageDelegate;
    NSURL *_url;
    NSMutableDictionary *_parameters;
    long long _requestMethod;
    NSMutableArray *_multiParts;
    NSString *_applicationID;
}

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic, readonly) long long requestMethod;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *parameters;

+ (_Bool)responseIsTimestampOutOfBounds:(id)arg1 data:(id)arg2 JSONResponseObject:(id)arg3;
+ (float)retryDelayForRetryCount:(int)arg1;

- (id)initWithURL:(id)arg1;
- (id)credential;
- (void)setCredential:(id)arg1;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (_Bool)requiresAuthorization;
- (void)setApplicationID:(id)arg1;
- (int)callingPID;
- (id)_allParameters;
- (id)_parameterString;
- (id)_urlEncodedString:(id)arg1;
- (id)multiPartBodyData;
- (void)setCallingPID:(int)arg1;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (void)sharedPrivateInit;
- (double)_timestampSkew;
- (void)_setTimestampSkew:(double)arg1;
- (id)signedURLRequest;
- (void)calculateTimestampSkewFromResponse:(id)arg1;
- (id)commandName;
- (void)_performRequestExtractingJSONResponse:(_Bool)arg1 retryCount:(int)arg2 maxRetries:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCredential:(id)arg1 URL:(id)arg2;
- (void)setRequestMethod:(long long)arg1;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)setTimestampSkewStorageDelegate:(id)arg1;
- (id)timestampSkewStorageDelegate;

@end
