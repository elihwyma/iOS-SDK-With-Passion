/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, _SFServiceIdentifier;

@interface _SFCredential : NSObject <Swift>

{
    _SFServiceIdentifier *_primaryServiceIdentifier;
    NSArray *_supplementaryServiceIdentifiers;
    NSString *_label;
    NSString *_description;
    NSString *_persistentIdentifier;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSDictionary *_customAttributes;
    int _keyclass;
    NSString *_accessGroup;
    NSData *_changeToken;
}

@property (copy, nonatomic, setter=_setPersistentIdentifier:) NSString *persistentIdentifier;
@property (copy, nonatomic, setter=_setCreationDate:) NSDate *creationDate;
@property (copy, nonatomic, setter=_setModificationDate:) NSDate *modificationDate;
@property (nonatomic, getter=_keyclass, setter=_setKeyclass:) int keyclass;
@property (retain, nonatomic, getter=_accessGroup, setter=_setAccessGroup:) NSString *accessGroup;
@property (retain, nonatomic, getter=_changeToken, setter=_setChangeToken:) NSData *changeToken;
@property (retain, nonatomic) _SFServiceIdentifier *primaryServiceIdentifier;
@property (retain, nonatomic) NSArray *supplementaryServiceIdentifiers;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSDictionary *customAttributes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithPrimaryServiceIdentifier:(id)arg1 supplementaryServiceIdentiifers:(id)arg2;

@end
