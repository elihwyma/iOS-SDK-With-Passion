/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKVerificationChannel : NSObject <Swift>

{
    _Bool _requiresUserInteraction;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_organizationName;
    NSString *_contactPoint;
    NSString *_sourceAddress;
    NSString *_typeDescription;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeDescription;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) _Bool requiresUserInteraction;
@property (copy, nonatomic) NSString *contactPoint;
@property (copy, nonatomic) NSString *sourceAddress;
@property (copy, nonatomic, readonly) NSString *typeDescriptionUnlocalized;

+ (_Bool)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)needsServerRequest;

@end
