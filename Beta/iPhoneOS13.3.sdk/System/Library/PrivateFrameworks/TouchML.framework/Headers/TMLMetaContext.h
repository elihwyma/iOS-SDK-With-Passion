/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TMLMetaObject;

@interface TMLMetaContext : NSObject

{
    NSMutableDictionary *_classes;
    NSMutableDictionary *_protocols;
    NSMutableDictionary *_objects;
    NSString *_rootObjectIdentifier;
    NSMutableDictionary *_functions;
    NSMutableArray *_exports;
    NSMutableArray *_categories;
    NSMutableSet *_requires;
}

@property (nonatomic, readonly) NSDictionary *classes;
@property (nonatomic, readonly) NSDictionary *protocols;
@property (nonatomic, readonly) NSDictionary *objects;
@property (nonatomic, readonly) NSDictionary *functions;
@property (nonatomic, readonly) TMLMetaObject *rootObject;
@property (nonatomic, readonly) NSArray *exports;
@property (nonatomic, readonly) NSSet *requires;
@property (nonatomic, readonly) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;
+ (id)deserializeFromData:(id)arg1;
+ (id)convertObject:(id)arg1 toClass:(id)arg2;
+ (id)convertObject:(id)arg1 toProtocol:(id)arg2;

- (id)init;
- (void)addObject:(id)arg1;
- (void)addClass:(id)arg1;
- (void)commit;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)serializedData;
- (void)addFunction:(id)arg1;
- (void)addExports:(id)arg1;
- (void)addRequire:(id)arg1;
- (id)findParentForObjectWithIdentifier:(id)arg1;
- (void)removeClasses;
- (void)removeFunctions;
- (void)removeCategories;
- (void)addObjectAsClass:(id)arg1;
- (void)addObjectAsProtocol:(id)arg1;
- (void)addProtocol:(id)arg1;

@end
