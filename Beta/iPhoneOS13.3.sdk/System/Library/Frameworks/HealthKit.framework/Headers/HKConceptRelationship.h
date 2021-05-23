/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, NSString;

@interface HKConceptRelationship : NSObject <Swift>

{
    long long _identifier;
    HKConcept *_owner;
    NSString *_name;
    HKConcept *_destination;
}

@property (nonatomic, readonly) long long identifier;
@property (weak, nonatomic, readonly) HKConcept *owner;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) HKConcept *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 owner:(id)arg2 name:(id)arg3 destination:(id)arg4;
- (id)initWithOwner:(id)arg1 name:(id)arg2 destination:(id)arg3;

@end
