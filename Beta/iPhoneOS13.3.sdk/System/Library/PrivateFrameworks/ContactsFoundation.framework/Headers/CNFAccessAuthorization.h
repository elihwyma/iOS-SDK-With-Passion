/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNFAuditToken, NSNumber;

@protocol CNTCC;

@interface CNFAccessAuthorization : NSObject

{
    id <CNTCC> _tcc;
    CNFAuditToken *_auditToken;
    long long _addressBookPreflightStatus;
    long long _contactsFullPreflightStatus;
    long long _contactsLimitedPreflightStatus;
    struct NSNumber *_isClientLegacyImpl;
    struct NSNumber *_isNotesAccessGrantedCachedValue;
}

@property (retain, nonatomic) id <CNTCC> tcc;
@property (retain, nonatomic) CNFAuditToken *auditToken;
@property (nonatomic) long long addressBookPreflightStatus;
@property (nonatomic) long long contactsFullPreflightStatus;
@property (nonatomic) long long contactsLimitedPreflightStatus;
@property (retain, nonatomic) NSNumber *isClientLegacyImpl;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) _Bool isAccessRestricted;
@property (nonatomic, readonly) _Bool isAccessGranted;
@property (nonatomic, readonly) _Bool isLimitedAccessGranted;
@property (nonatomic, readonly) _Bool isFullAccessGranted;
@property (nonatomic, readonly) _Bool isNotesAccessGranted;
@property (nonatomic, readonly) _Bool isClientWhitelisted;
@property (nonatomic, readonly) _Bool isClientLegacy;

+ (id)sharedInstance;
+ (id)os_log;

- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAuditToken:(id)arg1 tcc:(id)arg2;
- (id)sharedAccessGrantedFutureForRequest:(long long)arg1;
- (_Bool)isAddressBookAccessGranted;
- (struct NSNumber *)_checkIfNotesAccessGranted;
- (_Bool)doesClientHaveNotesEntitlement;
- (_Bool)isAccessGrantedRequestingAccessIfNeeded;
- (id)accessGrantedFutureForService:(long long)arg1;
- (void)updatePreflightStatus:(long long)arg1 forService:(long long)arg2;
- (struct NSNumber *)resolveFuture:(id)arg1;
- (_Bool)_isPid:(int)arg1 linkedOnOrAfter:(CDStruct_c0454aff)arg2;
- (id)_readFileData:(int)arg1 offset:(int)arg2 size:(unsigned long long)arg3;
- (void)requestAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isAccessGrantedWithError:(id *)arg1;

@end
