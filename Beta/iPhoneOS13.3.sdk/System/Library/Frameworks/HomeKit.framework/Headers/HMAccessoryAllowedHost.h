/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSSet, NSString;

@interface HMAccessoryAllowedHost : HMFObject <Swift>

{
    NSString *_name;
    unsigned long long _purpose;
    NSSet *_addresses;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSSet *addresses;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 purpose:(unsigned long long)arg2 addresses:(id)arg3;

@end
