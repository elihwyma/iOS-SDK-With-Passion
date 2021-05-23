/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessoryCategory, HMHome, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject <Swift>

{
    _Bool _requiresSetupPayloadURL;
    _Bool _requiresOwnershipToken;
    HMHome *_home;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    NSUUID *_requestIdentifier;
}

@property (retain, nonatomic) HMHome *home;
@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) HMAccessoryCategory *accessoryCategory;
@property (nonatomic, readonly) _Bool requiresSetupPayloadURL;
@property (nonatomic, readonly) _Bool requiresOwnershipToken;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payloadWithOwnershipToken:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;

@end
