/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKConceptAttribute, HKConceptIdentifier, NSArray, NSMutableArray, NSString;

@interface HKConcept : NSObject

{
    NSMutableArray *_relationships;
    _Bool _relationshipsAreLoaded;
    NSString *preferredName;
    NSString *nodeName;
    HKConceptIdentifier *_identifier;
    NSArray *_attributes;
    HKConcept *_groupByConcept;
}

@property (copy, nonatomic) NSString *preferredName;
@property (copy, nonatomic) HKConceptIdentifier *identifier;
@property (copy, nonatomic) HKConcept *groupByConcept;
@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSArray *relationships;
@property (nonatomic) _Bool relationshipsAreLoaded;
@property (copy, nonatomic) NSString *nodeName;
@property (copy, nonatomic, readonly) HKConcept *chartedWithConcept;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) _Bool isUndefined;
@property (nonatomic, readonly) _Bool isAdHoc;
@property (copy, nonatomic, readonly) HKConceptAttribute *adHocCode;

+ (_Bool)supportsSecureCoding;
+ (id)undefinedConcept;
+ (id)_buildCategoryIdentifierWithCode:(unsigned long long)arg1;
+ (id)_conceptWithIdentifier:(id)arg1 attributes:(id)arg2;
+ (id)allergyCategoryIdentifier;
+ (id)conditionCategoryIdentifier;
+ (id)labCategoryIdentifier;
+ (id)medicationCategoryIdentifier;
+ (id)procedureCategoryIdentifier;
+ (id)vaccinationCategoryIdentifier;
+ (id)vitalCategoryIdentifier;
+ (id)unknownCategoryIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)addAttribute:(id)arg1;
- (id)_firstConceptOfRelationshipType:(id)arg1;
- (id)firstAttributeForName:(id)arg1;
- (id)_attributesMutableArray;
- (void)updateRelationshipsOwners;
- (id)attributesForName:(id)arg1;
- (void)addRelationship:(id)arg1;

@end
