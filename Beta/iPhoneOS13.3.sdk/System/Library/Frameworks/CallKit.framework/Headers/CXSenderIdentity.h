/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class CXAccount, CXHandle, NSString, NSUUID;

@interface CXSenderIdentity : NSObject <Swift>

{
    NSUUID *_UUID;
    CXAccount *_account;
    NSString *_localizedShortName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) CXAccount *account;
@property (nonatomic, readonly) CXHandle *handle;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *localizedShortName;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToSenderIdentity:(id)arg1;
- (id)initWithUUID:(id)arg1 account:(id)arg2;
- (id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3;

@end
