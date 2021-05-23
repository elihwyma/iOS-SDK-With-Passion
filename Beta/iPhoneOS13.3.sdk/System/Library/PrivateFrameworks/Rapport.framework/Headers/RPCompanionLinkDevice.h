/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Rapport/RPEndpoint.h>

@class NSDictionary, NSString, NSUUID;

@interface RPCompanionLinkDevice : RPEndpoint

{
    _Bool _personal;
    _Bool _changed;
    _Bool _daemon;
    _Bool _uiTriggered;
    unsigned int _flags;
    int _mediaSystemRole;
    int _mediaSystemState;
    int _personalDeviceState;
    int _personalRequestsState;
    int _mediaSystemRoleEffective;
    int _serversChangedState;
    NSString *_deviceColor;
    NSUUID *_homeKitIdentifier;
    NSString *_idsPersonalDeviceIdentifier;
    NSUUID *_mediaSystemIdentifier;
    NSString *_mediaSystemName;
    NSString *_publicIdentifier;
    NSString *_roomName;
    NSDictionary *_siriInfo;
    NSString *_role;
    NSUUID *_mediaSystemIdentifierEffective;
    NSUUID *_pairingIdentifier;
    NSString *_password;
}

@property (nonatomic) _Bool changed;
@property (nonatomic) _Bool daemon;
@property (copy, nonatomic) NSString *deviceColor;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSUUID *homeKitIdentifier;
@property (copy, nonatomic) NSString *idsPersonalDeviceIdentifier;
@property (copy, nonatomic) NSUUID *mediaSystemIdentifier;
@property (copy, nonatomic) NSString *mediaSystemName;
@property (copy, nonatomic) NSUUID *mediaSystemIdentifierEffective;
@property (nonatomic) int mediaSystemRole;
@property (nonatomic) int mediaSystemRoleEffective;
@property (nonatomic) int mediaSystemState;
@property (copy, nonatomic) NSUUID *pairingIdentifier;
@property (copy, nonatomic) NSString *password;
@property (nonatomic, getter=isPersonal) _Bool personal;
@property (nonatomic) int personalDeviceState;
@property (nonatomic) int personalRequestsState;
@property (copy, nonatomic) NSString *publicIdentifier;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *roomName;
@property (nonatomic) int serversChangedState;
@property (copy, nonatomic) NSDictionary *siriInfo;
@property (nonatomic) _Bool uiTriggered;
@property (copy, nonatomic, readonly) NSString *effectiveIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

@end
