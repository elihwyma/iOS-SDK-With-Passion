/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (SSExtensions)

@property (nonatomic, readonly) NSString *_ss_altDSID;
@property (nonatomic, readonly) NSNumber *_ss_DSID;
@property (nonatomic, readonly) NSString *_ss_hashedDescription;
@property (nonatomic, readonly) _Bool _ss_isAppleAuthenticationAccount;
@property (nonatomic, readonly) _Bool _ss_isiCloudAccount;
@property (nonatomic, readonly) _Bool _ss_isIDMSAccount;
@property (nonatomic, readonly) _Bool _ss_isiTunesAccount;
@property (nonatomic, readonly) _Bool _ss_isLocalAccount;
@property (copy, nonatomic, setter=_ss_setSecureToken:) NSString *_ss_secureToken;

- (_Bool)_ss_isDuplicate:(id)arg1;

@end
