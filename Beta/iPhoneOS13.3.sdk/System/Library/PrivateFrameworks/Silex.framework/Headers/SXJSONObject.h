/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SXJSONObject : NSObject

{
    struct os_unfair_lock_s _unfairLock;
    NSDictionary *_jsonDictionary;
    NSString *_specificationVersion;
    NSMutableDictionary *_objectStorage;
}

@property (nonatomic, readonly) NSMutableDictionary *objectStorage;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) struct os_unfair_lock_s unfairLock;
@property (nonatomic, readonly) NSString *specificationVersion;

+ (void)initialize;
+ (void)lock;
+ (void)unlock;
+ (id)propertyDefinitions;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
+ (Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2;
+ (id)propertyHashTable;
+ (id)protocolPropertyDefinitions;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)jsonData;
- (id)JSONRepresentation;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONData:(id)arg1 andVersion:(id)arg2;
- (void)storeObject:(id)arg1 forLookupKey:(id)arg2;
- (id)objectForLookupKey:(id)arg1;
- (void)storeValue:(id)arg1 forLookupKey:(id)arg2;
- (id)valueForLookupKey:(id)arg1;

@end
