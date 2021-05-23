/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface VSAuditToken : NSObject

{
    NSString *_bundleIdentifier;
    NSData *_tokenBytes;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSData *tokenBytes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
