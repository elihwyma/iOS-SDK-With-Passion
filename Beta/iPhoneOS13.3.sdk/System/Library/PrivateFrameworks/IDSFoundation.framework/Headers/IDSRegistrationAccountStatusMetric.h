/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PBCodable;

@protocol NSCopying;

@interface IDSRegistrationAccountStatusMetric : NSObject

{
    _Bool _doesExist;
    _Bool _isEnabled;
    _Bool _isUserDisabled;
    _Bool _doesMatchiCloudAccount;
    _Bool _isiCloudSignedIn;
    _Bool _isiTunesSignedIn;
    _Bool _hasEverRegistered;
    _Bool _areAllAliasesSelected;
    _Bool _areAllSelectedAliasesRegistered;
    _Bool _isProdEnvironment;
    int _accountType;
    int _registrationErrorReason;
    int _accountRegistrationStatus;
    NSString *_serviceIdentifier;
    long long _registrationError;
    long long _registrationStatus;
    long long _lastRegistrationFailureError;
    double _timeIntervalSinceLastRegistrationFailure;
    double _timeIntervalSinceLastRegistrationSuccess;
    long long _accountSecurityLevel;
    long long _numberOfSelected;
    long long _numberOfVetted;
    long long _numberOfUnselectReasonUnknown;
    long long _numberOfUnselectReasonAlertDenial;
    long long _numberOfUnselectReasonClientCall;
    long long _numberOfUnselectReasonBadAlias;
    long long _numberOfUnselectReasonUpdateInfo;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) int accountType;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) _Bool doesExist;
@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) _Bool isUserDisabled;
@property (nonatomic, readonly) _Bool doesMatchiCloudAccount;
@property (nonatomic, readonly) _Bool isiCloudSignedIn;
@property (nonatomic, readonly) _Bool isiTunesSignedIn;
@property (nonatomic, readonly) long long registrationError;
@property (nonatomic, readonly) int registrationErrorReason;
@property (nonatomic, readonly) long long registrationStatus;
@property (nonatomic, readonly) int accountRegistrationStatus;
@property (nonatomic, readonly) long long lastRegistrationFailureError;
@property (nonatomic, readonly) _Bool hasEverRegistered;
@property (nonatomic, readonly) double timeIntervalSinceLastRegistrationFailure;
@property (nonatomic, readonly) double timeIntervalSinceLastRegistrationSuccess;
@property (nonatomic, readonly) long long accountSecurityLevel;
@property (nonatomic, readonly) _Bool areAllAliasesSelected;
@property (nonatomic, readonly) _Bool areAllSelectedAliasesRegistered;
@property (nonatomic, readonly) _Bool isProdEnvironment;
@property (nonatomic, readonly) long long numberOfSelected;
@property (nonatomic, readonly) long long numberOfVetted;
@property (nonatomic, readonly) long long numberOfUnselectReasonUnknown;
@property (nonatomic, readonly) long long numberOfUnselectReasonAlertDenial;
@property (nonatomic, readonly) long long numberOfUnselectReasonClientCall;
@property (nonatomic, readonly) long long numberOfUnselectReasonBadAlias;
@property (nonatomic, readonly) long long numberOfUnselectReasonUpdateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;

- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(_Bool)arg3 isEnabled:(_Bool)arg4 isUserDisabled:(_Bool)arg5 isiCloudSignedIn:(_Bool)arg6 doesMatchiCloudAccount:(_Bool)arg7 isiTunesSignedIn:(_Bool)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 registrationStatus:(long long)arg11 accountRegistrationStatus:(int)arg12 hasEverRegistered:(_Bool)arg13 lastRegistrationFailureError:(long long)arg14 timeIntervalSinceLastRegistrationFailure:(double)arg15 timeIntervalSinceLastRegistrationSuccess:(double)arg16 accountSecurityLevel:(long long)arg17 areAllAliasesSelected:(_Bool)arg18 areAllSelectedAliasesRegistered:(_Bool)arg19 numberOfSelected:(long long)arg20 numberOfVetted:(long long)arg21 numberOfUnselectReasonUnknown:(long long)arg22 numberOfUnselectReasonAlertDenial:(long long)arg23 numberOfUnselectReasonClientCall:(long long)arg24 numberOfUnselectReasonBadAlias:(long long)arg25 numberOfUnselectReasonUpdateInfo:(long long)arg26 isProdEnvironment:(_Bool)arg27;

@end
