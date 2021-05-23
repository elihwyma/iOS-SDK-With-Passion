/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString;

@interface HKFHIRIdentifier : NSObject <Swift>

{
    NSString *_resourceType;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *resourceType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *stringValue;

+ (_Bool)supportsSecureCoding;
+ (id)FHIRIdentifierWithString:(id)arg1 error:(out id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2;
- (id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)parentResourceIdentifierWithError:(id *)arg1;
- (id)SQLWildcardIdentifierForContainedResources;
- (id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;

@end
