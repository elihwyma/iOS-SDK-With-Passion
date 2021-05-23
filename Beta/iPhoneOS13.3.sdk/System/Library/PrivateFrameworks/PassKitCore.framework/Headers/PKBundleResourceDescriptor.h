/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <Swift>

{
    NSString *_name;
    NSString *_extension;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *extension;

+ (_Bool)supportsSecureCoding;
+ (id)withName:(id)arg1 extension:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 extension:(id)arg2;
- (_Bool)isEqualToBundleResourceDescriptor:(id)arg1;

@end
