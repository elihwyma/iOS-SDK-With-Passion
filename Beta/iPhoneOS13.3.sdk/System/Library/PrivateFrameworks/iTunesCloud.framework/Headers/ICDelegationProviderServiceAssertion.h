/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface ICDelegationProviderServiceAssertion : NSObject <Swift>

{
    NSDate *_expirationDate;
    NSString *_name;
    NSUUID *_uniqueIdentifier;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;

@end
