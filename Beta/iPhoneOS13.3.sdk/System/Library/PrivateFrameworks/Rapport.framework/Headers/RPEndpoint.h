/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUBonjourDevice, IDSDevice, NSArray, NSDictionary, NSString, SFDevice;

@interface RPEndpoint : NSObject

{
    SFDevice *_bleDevice;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _hotspotInfo;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    int _linkType;
    NSString *_mediaRemoteIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_model;
    NSString *_name;
    NSArray *_serviceTypes;
    unsigned long long _statusFlags;
    NSString *_sourceVersion;
    _Bool _present;
    int _proximity;
    NSString *_homeKitUserIdentifier;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    IDSDevice *_idsDevice;
}

@property (retain, nonatomic) SFDevice *bleDevice;
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool present;
@property (copy, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long statusFlags;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic, readonly) NSString *homeKitUserIdentifier;
@property (nonatomic, readonly) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) int proximity;
@property (copy, nonatomic, readonly) NSDictionary *serviceInfo;
@property (copy, nonatomic, readonly) NSString *serviceType;

+ (_Bool)supportsSecureCoding;
+ (id)nullEndpoint;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (_Bool)removeBonjourDevice:(id)arg1;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (_Bool)removeSFDevice:(id)arg1;

@end
