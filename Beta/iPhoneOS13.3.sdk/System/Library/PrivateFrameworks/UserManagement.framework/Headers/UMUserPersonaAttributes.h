/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface UMUserPersonaAttributes : NSObject

{
    _Bool _isEnterprisePersona;
    _Bool _isPersonalPersona;
    _Bool _isUniversalPersona;
    _Bool _isSystemPersona;
    _Bool _isDefaultPersona;
    _Bool _isDisabled;
    unsigned int _userPersona_id;
    NSString *_userPersonaUniqueString;
    unsigned long long _userPersonaType;
    NSURL *_personaLayoutPathURL;
    NSArray *_userPersonaBundleIDList;
    NSString *_userPersonaDisplayName;
    NSDate *_creationDate;
    NSDate *_lastLoginDate;
    NSDate *_lastDisableDate;
    NSDate *_lastEnableDate;
}

@property (copy, nonatomic) NSURL *personaLayoutPathURL;
@property (copy, nonatomic) NSString *userPersonaUniqueString;
@property (nonatomic) unsigned long long userPersonaType;
@property (nonatomic) unsigned int userPersona_id;
@property (nonatomic) _Bool isEnterprisePersona;
@property (nonatomic) _Bool isPersonalPersona;
@property (nonatomic) _Bool isUniversalPersona;
@property (nonatomic) _Bool isSystemPersona;
@property (nonatomic) _Bool isDefaultPersona;
@property (nonatomic) _Bool isDisabled;
@property (copy, nonatomic) NSString *userPersonaDisplayName;
@property (copy, nonatomic) NSArray *userPersonaBundleIDList;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastLoginDate;
@property (copy, nonatomic) NSDate *lastDisableDate;
@property (copy, nonatomic) NSDate *lastEnableDate;

+ (id)personaAttributesForPersonaType:(unsigned long long)arg1;
+ (id)personaAttributesForPersonaUniqueString:(id)arg1;
+ (id)setUpPersonaAttributesWithDictionary:(id)arg1;
+ (id)personaAttributes;
+ (id)personaAttributesForIdentifier:(id)arg1;
+ (id)currentContextIdentifier;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromUserPersona:(id)arg1;

@end
