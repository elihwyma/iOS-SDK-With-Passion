/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HKConceptIdentifier : NSObject <Swift>

{
    long long _rawIdentifier;
}

@property (nonatomic) long long rawIdentifier;
@property (copy, nonatomic, readonly) NSNumber *numberRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithRawIdentifier:(long long)arg1;
+ (id)identifierWithNumber:(id)arg1;
+ (id)undefinedIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawIdentifier:(long long)arg1;

@end
