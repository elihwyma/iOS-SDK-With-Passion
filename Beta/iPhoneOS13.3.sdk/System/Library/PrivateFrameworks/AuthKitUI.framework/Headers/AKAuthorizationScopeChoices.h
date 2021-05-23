/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class AKAuthorizationUserResponse, AKUserInformation, NSArray, NSString;

@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationScopeChoices : NSObject

{
    _Bool _wantsPrivateEmail;
    NSArray *_scopes;
    AKUserInformation *_userInformation;
    id <AKCredentialRequestProtocol> _selectedRequest;
    unsigned long long _indexOfChosenEmail;
    unsigned long long _indexOfChosenLogin;
    unsigned long long _emailCount;
}

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) AKUserInformation *userInformation;
@property (retain, nonatomic) id <AKCredentialRequestProtocol> selectedRequest;
@property unsigned long long indexOfChosenEmail;
@property unsigned long long indexOfChosenLogin;
@property _Bool wantsPrivateEmail;
@property (nonatomic, readonly) unsigned long long emailCount;
@property (nonatomic, readonly) NSString *chosenEmail;
@property (nonatomic, readonly) NSString *forwardingEmail;
@property (nonatomic, readonly) AKAuthorizationUserResponse *userResponse;
@property (nonatomic, readonly) unsigned long long personNameComponentsOrder;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedChosenEmail;

+ (id)localizedGivenNameLabel;
+ (id)localizedFamilyNameLabel;
+ (id)_dotsWithLength:(unsigned long long)arg1;
+ (id)obfuscatedEmail:(id)arg1;

- (id)description;
- (id)_userSelection;
- (id)_personNameComponents;
- (void)setGivenName:(id)arg1 familyName:(id)arg2;
- (id)emailAtIndex:(unsigned long long)arg1;
- (id)initWithScopes:(id)arg1 userInformation:(id)arg2;

@end
