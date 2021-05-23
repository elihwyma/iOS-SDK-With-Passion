/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    HMUser *_user;
    unsigned long long _cachedHash;
}

@property (nonatomic, readonly) unsigned long long cachedHash;
@property (weak) HMUser *user;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;

@end
