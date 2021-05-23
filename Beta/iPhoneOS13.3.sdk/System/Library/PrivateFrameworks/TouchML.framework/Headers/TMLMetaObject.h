/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString, TMLValueExpression;

@interface TMLMetaObject : NSObject

{
    NSString *_type;
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
    NSMutableDictionary *_signalHandlers;
    NSMutableArray *_declarations;
    NSMutableArray *_objects;
    NSMutableSet *_implements;
    TMLValueExpression *_initializer;
    NSSet *_attributes;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSOrderedSet *propertyKeys;
@property (nonatomic, readonly) NSDictionary *signalHandlers;
@property (nonatomic, readonly) NSArray *declarations;
@property (nonatomic, readonly) NSArray *objects;
@property (retain, nonatomic) TMLValueExpression *initializer;
@property (nonatomic, readonly) NSSet *implements;
@property (nonatomic, readonly) NSSet *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (void)addObject:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithType:(id)arg1 attributes:(id)arg2;
- (void)addDeclaration:(id)arg1;
- (void)addProperty:(id)arg1 value:(id)arg2;
- (void)addPropertyDeclaration:(id)arg1 typeName:(id)arg2 attributes:(id)arg3;
- (id)signalDeclaration:(id)arg1;
- (void)addSignalHandler:(id)arg1 signalTarget:(id)arg2;
- (void)addImplements:(id)arg1;
- (void)addSignalDeclaration:(id)arg1 returnType:(id)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5;
- (void)addMethodDeclaration:(id)arg1 returnType:(id)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5;
- (void)addConstructorDeclaration:(id)arg1 parameters:(id)arg2 methodSelector:(id)arg3;
- (void)applyCategory:(id)arg1;
- (id)propertyDeclaration:(id)arg1;

@end
