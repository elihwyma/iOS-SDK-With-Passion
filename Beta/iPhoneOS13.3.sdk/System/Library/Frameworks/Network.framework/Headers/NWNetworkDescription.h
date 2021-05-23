/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface NWNetworkDescription : NSObject

{
    NSSet *_interfaceTypeOptions;
    NSSet *_ssidOptions;
    NSSet *_dnsSearchDomainOptions;
    NSSet *_dnsServerAddressOptions;
    long long _roamingPreference;
    NSURL *_probeURL;
    long long _state;
}

@property long long state;
@property (nonatomic, readonly) NSString *privateDescription;
@property (copy) NSSet *interfaceTypeOptions;
@property (copy) NSSet *ssidOptions;
@property (copy) NSSet *dnsSearchDomainOptions;
@property (copy) NSSet *dnsServerAddressOptions;
@property long long roamingPreference;
@property (copy) NSURL *probeURL;

+ (long long)getNewStateFromPathMatch:(_Bool)arg1 oldState:(long long)arg2 probeExists:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (_Bool)matchesPath:(id)arg1;
- (void)updateStateWithPath:(id)arg1;

@end
