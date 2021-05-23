/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSString, NSUUID;

@interface IDSQueryKeyTransparencyContext : NSObject <Swift>

{
    NSUUID *_ticket;
    NSString *_accountIdentifier;
}

@property (nonatomic, readonly) NSUUID *ticket;
@property (nonatomic, readonly) NSString *accountIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToQueryKeyTransparencyContext:(id)arg1;
- (id)initWithTicket:(id)arg1 accountIdentifier:(id)arg2;

@end
