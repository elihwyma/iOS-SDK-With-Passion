/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, VSAuditToken;

@interface VSStoreRequest : NSObject

{
    NSString *_methodName;
    NSString *_bagKey;
    NSDictionary *_parameters;
    VSAuditToken *_auditToken;
}

@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *bagKey;
@property (copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) VSAuditToken *auditToken;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
