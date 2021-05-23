/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSString, NSUUID, VMHandle;

@interface VMAccount : NSObject <Swift>

{
    _Bool _provisioned;
    NSUUID *_UUID;
    NSString *_accountDescription;
    NSString *_abbreviatedAccountDescription;
    VMHandle *_handle;
    NSString *_isoCountryCode;
    NSString *_serviceName;
}

@property (retain, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *abbreviatedAccountDescription;
@property (retain, nonatomic) VMHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic, getter=isProvisioned) _Bool provisioned;
@property (copy, nonatomic) NSString *serviceName;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (void)copyPropertiesWithZone:(struct _NSZone *)arg1 toAccount:(id)arg2;

@end
