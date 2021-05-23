/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NEHotspotHS20Settings : NSObject

{
    _Bool _roamingEnabled;
    NSString *_domainName;
    NSArray *_roamingConsortiumOIs;
    NSArray *_naiRealmNames;
    NSArray *_MCCAndMNCs;
}

@property (readonly) NSString *domainName;
@property (getter=isRoamingEnabled) _Bool roamingEnabled;
@property (copy) NSArray *roamingConsortiumOIs;
@property (copy) NSArray *naiRealmNames;
@property (copy) NSArray *MCCAndMNCs;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 roamingEnabled:(_Bool)arg2;

@end
