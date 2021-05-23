/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class CXHandle, NSString, NSUUID;

@interface CXAccount : NSObject <Swift>

{
    NSUUID *_UUID;
    NSString *_accountDescription;
    NSString *_shortLabel;
    CXHandle *_handle;
    NSString *_isoCountryCode;
    NSString *_serviceName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSString *accountDescription;
@property (copy, nonatomic, readonly) NSString *shortLabel;
@property (nonatomic, readonly) CXHandle *handle;
@property (copy, nonatomic, readonly) NSString *isoCountryCode;
@property (copy, nonatomic, readonly) NSString *serviceName;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5;
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6;

@end
