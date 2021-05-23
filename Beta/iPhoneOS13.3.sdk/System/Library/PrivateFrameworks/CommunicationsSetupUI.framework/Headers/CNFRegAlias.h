/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject

{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
    long long _givenAliasType;
    _Bool _selectedDeviceAlias;
    NSString *_deviceAliasIdentifier;
}

@property (copy, nonatomic) NSString *alias;
@property (retain, nonatomic) IMAccount *account;
@property (nonatomic) long long givenAliasType;
@property (nonatomic) NSString *deviceAliasIdentifier;
@property (nonatomic, getter=isSelectedDeviceAlias) _Bool selectedDeviceAlias;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long type;
@property (retain, nonatomic, readonly) NSString *identifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (_Bool)validate;
- (long long)validationStatus;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(_Bool)arg3 deviceAliasIdentifier:(id)arg4;
- (_Bool)isDeviceAlias;
- (_Bool)isPhoneNumberAliasOnPhoneNumberAccount;
- (long long)validationErrorReason;
- (_Bool)isLocalPhoneNumberAlias;

@end
