/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICAgeVerifier, ICUserIdentity, NSError, NSURL;

@interface ICAgeVerificationState : NSObject <Swift>

{
    long long _status;
    ICUserIdentity *_userIdentity;
    long long _treatment;
    NSURL *_verificationURL;
    NSError *_error;
    ICAgeVerifier *_ageVerifier;
}

@property (copy, nonatomic, readonly) ICAgeVerifier *ageVerifier;
@property (nonatomic, readonly, getter=isDynamic) _Bool dynamic;
@property (nonatomic, readonly) long long treatment;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) NSURL *verificationURL;
@property (nonatomic, readonly, getter=isExplicitContentAllowed) _Bool explicitContentAllowed;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

+ (id)cachedStateForDSID:(id)arg1;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withError:(id)arg2;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 verificationURL:(id)arg3;
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2;
+ (id)_stateFromDictionaryRepresentation:(id)arg1 DSID:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserIdentity:(id)arg1 ageVerifier:(id)arg2 treatment:(long long)arg3 verificationURL:(id)arg4;
- (void)saveToUserDefaults;
- (id)_initWithUserIdentity:(id)arg1 status:(long long)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 error:(id)arg5;
- (id)_dictionaryRepresentationWithDSID:(id)arg1;

@end
