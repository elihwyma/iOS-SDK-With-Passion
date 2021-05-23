/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ICLocalStoreAccountProperties : NSObject <Swift>

{
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic, readonly) NSDictionary *propertyListRepresentation;
@property (copy, nonatomic, readonly) NSString *storefrontIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
