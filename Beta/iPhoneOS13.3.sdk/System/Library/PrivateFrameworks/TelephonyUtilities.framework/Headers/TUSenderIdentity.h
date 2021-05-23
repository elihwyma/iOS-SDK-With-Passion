/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, NSUUID, TUHandle;

@interface TUSenderIdentity : NSObject <Swift>

{
    NSUUID *_UUID;
    NSUUID *_accountUUID;
    TUHandle *_handle;
    NSString *_localizedName;
    NSString *_localizedShortName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSUUID *accountUUID;
@property (nonatomic, readonly) TUHandle *handle;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *localizedShortName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5;
- (_Bool)isEqualToSenderIdentity:(id)arg1;

@end
