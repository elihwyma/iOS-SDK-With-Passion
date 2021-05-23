/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, RLMProperty;

@interface RLMObjectSchema : NSObject <Swift>

{
    _Bool _isSwiftClass;
    NSArray *_swiftGenericProperties;
    NSArray *_properties;
    NSString *_className;
    RLMProperty *_primaryKeyProperty;
    NSDictionary *_allPropertiesByName;
    Class _objectClass;
    Class _accessorClass;
    Class _unmanagedClass;
    NSArray *_computedProperties;
}

@property (retain, nonatomic) NSDictionary *allPropertiesByName;
@property (retain, nonatomic) NSString *className;
@property (nonatomic, readonly) NSString *objectName;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic) _Bool isSwiftClass;
@property (nonatomic) Class objectClass;
@property (nonatomic) Class accessorClass;
@property (nonatomic) Class unmanagedClass;
@property (retain, nonatomic) RLMProperty *primaryKeyProperty;
@property (copy, nonatomic) NSArray *computedProperties;
@property (nonatomic, readonly) NSArray *swiftGenericProperties;

+ (id)propertiesForClass:(Class)arg1 isSwift:(_Bool)arg2;
+ (void)addSwiftProperties:(id)arg1 objectUtil:(Class)arg2 instance:(id)arg3 indexed:(id)arg4 nameMap:(id)arg5;
+ (id)objectSchemaForObjectStoreSchema:(const struct ObjectSchema *)arg1;
+ (id)schemaForObjectClass:(Class)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)_propertiesDidChange;
- (id)initWithClassName:(id)arg1 objectClass:(Class)arg2 properties:(id)arg3;
- (struct ObjectSchema)objectStoreCopy:(id)arg1;
- (_Bool)isEqualToObjectSchema:(id)arg1;

@end
