/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, WFRecordDescriptor;

@interface WFRecord : NSObject <Swift>

{
    WFRecordDescriptor *_descriptor;
    NSDictionary *_allPropertiesByName;
    NSMutableSet *_fetchedPropertyNames;
    NSMutableSet *_modifiedPropertyNames;
    NSMutableDictionary *_lastFetchedValues;
    NSMutableSet *_modifiedPropertyNamesSinceLastSave;
    NSMutableDictionary *_lastSavedOrFetchedValues;
}

@property (nonatomic, readonly) NSDictionary *allPropertiesByName;
@property (nonatomic, readonly) NSMutableSet *fetchedPropertyNames;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNames;
@property (nonatomic, readonly) NSMutableDictionary *lastFetchedValues;
@property (nonatomic, readonly) NSMutableSet *modifiedPropertyNamesSinceLastSave;
@property (nonatomic, readonly) NSMutableDictionary *lastSavedOrFetchedValues;
@property (nonatomic, readonly) NSSet *allProperties;
@property (nonatomic, readonly) NSSet *fetchedProperties;
@property (nonatomic, readonly) NSSet *modifiedPropertiesSinceLastSave;
@property (nonatomic, readonly) NSSet *modifiedProperties;
@property (nonatomic, readonly) WFRecordDescriptor *descriptor;

+ (id)defaultPropertyValues;
+ (id)propertiesForClass:(Class)arg1 walkingSuperclassesUntilReaching:(Class)arg2;
+ (Class)allocateLeafClassForRecordClass:(Class)arg1 named:(id)arg2;
+ (id)ignoredPropertyNames;
+ (id)propertiesForClass:(Class)arg1;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithDescriptor:(id)arg1 storage:(id)arg2 error:(id *)arg3;
- (id)initWithDescriptor:(id)arg1 storage:(id)arg2 properties:(id)arg3 error:(id *)arg4;
- (void)loadFromStorage:(id)arg1;
- (void)loadFromStorage:(id)arg1 properties:(id)arg2;
- (_Bool)saveChangesToStorage:(id)arg1 error:(id *)arg2;
- (_Bool)writeToStorage:(id)arg1 error:(id *)arg2;
- (id)descriptionWithValues:(_Bool)arg1;
- (void)markPropertyModifiedIfNecessary:(id)arg1;
- (void)resetModifications:(_Bool)arg1;
- (_Bool)saveProperties:(id)arg1 toStorage:(id)arg2 error:(id *)arg3;

@end
