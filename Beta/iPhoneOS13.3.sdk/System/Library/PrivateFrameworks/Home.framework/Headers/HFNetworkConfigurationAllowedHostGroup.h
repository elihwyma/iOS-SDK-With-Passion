/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface HFNetworkConfigurationAllowedHostGroup : NSObject

{
    NSString *_name;
    unsigned long long _purpose;
    NSMutableSet *_mutableAddresses;
    NSMutableSet *_mutableAllowedHosts;
}

@property (copy, nonatomic) NSMutableSet *mutableAddresses;
@property (nonatomic) unsigned long long purpose;
@property (copy, nonatomic) NSMutableSet *mutableAllowedHosts;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSSet *addresses;
@property (copy, nonatomic, readonly) NSSet *allowedHosts;
@property (copy, nonatomic, readonly) NSString *purposeLocalizedDescription;

+ (id)groupsForNetworkConfigurationProfiles:(id)arg1;

- (id)initWithName:(id)arg1;
- (void)addAllowedHost:(id)arg1;

@end
