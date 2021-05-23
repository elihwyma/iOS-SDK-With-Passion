/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSDestination.h>

@class NSData, NSString;

@interface IDSDestinationPushToken : IDSDestination

{
    NSString *_alias;
    NSData *_pushToken;
}

@property (nonatomic, readonly) NSString *alias;
@property (nonatomic, readonly) NSData *pushToken;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)initWithAlias:(id)arg1 pushToken:(id)arg2;

@end
