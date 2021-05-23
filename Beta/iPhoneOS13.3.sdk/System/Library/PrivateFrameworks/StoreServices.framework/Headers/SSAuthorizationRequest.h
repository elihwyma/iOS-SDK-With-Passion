/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@protocol SSAuthorizationRequestDelegate;

@interface SSAuthorizationRequest : SSRequest

{
    NSNumber *_accountIdentifier;
    _Bool _allowSilentAuthentication;
    NSString *_keybagPath;
    id _token;
    NSString *_reason;
    _Bool _shouldAddKeysToKeyBag;
    _Bool _shouldPromptForCredentials;
    NSString *_clientIdentifierHeader;
    NSNumber *_familyAccountIdentifier;
    NSString *_userAgent;
}

@property (nonatomic) id <SSAuthorizationRequestDelegate> delegate;
@property (copy) NSNumber *accountIdentifier;
@property (nonatomic) _Bool allowSilentAuthentication;
@property (readonly) id authorizationToken;
@property (copy) NSString *clientIdentifierHeader;
@property (copy) NSNumber *familyAccountIdentifier;
@property (copy) NSString *keybagPath;
@property (copy) NSString *reason;
@property (nonatomic) _Bool shouldAddKeysToKeyBag;
@property (nonatomic) _Bool shouldPromptForCredentials;
@property (copy) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_init;
- (_Bool)start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithAuthorizationResponseBlock:(CDUnknownBlockType)arg1;

@end
