/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse

{
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

@property (nonatomic, readonly) NSString *fmfToken;
@property (nonatomic, readonly) NSString *fmfAppToken;
@property (nonatomic, readonly) NSString *fmipToken;
@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *mapsToken;
@property (nonatomic, readonly) NSString *cloudKitToken;
@property (nonatomic, readonly) NSString *fmipLostModeToken;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *mdmServerToken;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
