/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

#import <SafariFoundation/Swift-Protocol.h>

@class NSDate, NSString, SFCredentialProviderExtensionState;

@interface SFPasswordCredentialIdentity : NSObject <Swift>

{
    NSString *_domainWithoutWWWDot;
    long long _rowIdentifier;
    long long _serviceIdentifierType;
    NSString *_serviceIdentifier;
    NSString *_externalRecordIdentifier;
    NSString *_user;
    long long _rank;
    SFCredentialProviderExtensionState *_owningExtensionState;
}

@property (nonatomic) long long rowIdentifier;
@property (retain, nonatomic) SFCredentialProviderExtensionState *owningExtensionState;
@property (nonatomic, readonly) long long serviceIdentifierType;
@property (copy, nonatomic, readonly) NSString *serviceIdentifier;
@property (copy, nonatomic, readonly) NSString *externalRecordIdentifier;
@property (copy, nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) long long rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *site;
@property (copy, nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, getter=isExternal) _Bool external;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)compareForQuickTypeBar:(id)arg1;
- (id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6;
- (id)initWithRowIdentifier:(long long)arg1 serviceIdentifier:(id)arg2 serviceIdentifierType:(long long)arg3 externalRecordIdentifier:(id)arg4 user:(id)arg5 rank:(long long)arg6 owningExtensionState:(id)arg7;
- (id)_domainWithoutWWWDot;
- (id)initWithServiceIdentifier:(id)arg1 serviceIdentifierType:(long long)arg2 externalRecordIdentifier:(id)arg3 user:(id)arg4 rank:(long long)arg5;

@end
