/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <Swift>

{
    PKOSVersionRequirement *_minimum;
    PKOSVersionRequirement *_maximum;
}

@property (nonatomic, readonly) PKOSVersionRequirement *minimum;
@property (nonatomic, readonly) PKOSVersionRequirement *maximum;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;

@end
