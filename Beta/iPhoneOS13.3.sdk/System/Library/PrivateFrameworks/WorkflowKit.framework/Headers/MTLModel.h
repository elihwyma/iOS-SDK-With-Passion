/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface MTLModel : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;
+ (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)modelVersion;
+ (id)propertyKeys;
+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)permanentPropertyKeys;
+ (id)transitoryPropertyKeys;
+ (void)generateAndCacheStorageBehaviors;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (id)encodingBehaviorsByPropertyKey;
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
- (void)mergeValuesForKeysFromModel:(id)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

@end
