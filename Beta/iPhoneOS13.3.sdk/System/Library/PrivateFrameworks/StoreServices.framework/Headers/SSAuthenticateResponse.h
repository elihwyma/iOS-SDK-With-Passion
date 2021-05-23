/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSError, NSString, SSAccount;

@interface SSAuthenticateResponse : NSObject

{
    SSAccount *_authenticatedAccount;
    long long _authenticateResponseType;
    unsigned long long _credentialSource;
    NSError *_error;
    NSDictionary *_responseDictionary;
}

@property (retain, nonatomic) SSAccount *authenticatedAccount;
@property (nonatomic) long long authenticateResponseType;
@property (nonatomic) unsigned long long credentialSource;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_setError:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
