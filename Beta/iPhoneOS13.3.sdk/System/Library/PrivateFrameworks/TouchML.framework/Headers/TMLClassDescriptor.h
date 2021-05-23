/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, TMLValueExpression;

@interface TMLClassDescriptor : NSObject

{
    NSString *_className;
    NSString *_superClassName;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_signals;
    NSMutableDictionary *_methods;
    NSMutableDictionary *_childClasses;
    TMLValueExpression *_initializer;
    _Bool _optional;
    TMLClassDescriptor *_superClass;
    Class _objcClass;
    NSString *_objcClassName;
}

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *superClassName;
@property (retain, nonatomic) TMLClassDescriptor *superClass;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSDictionary *signals;
@property (nonatomic, readonly) NSDictionary *methods;
@property (nonatomic, readonly) NSDictionary *childClasses;
@property (nonatomic, readonly) Class objcClass;
@property (copy, nonatomic) NSString *objcClassName;
@property (nonatomic, readonly) TMLValueExpression *initializer;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (nonatomic, readonly) NSDictionary *inheritedProperties;
@property (nonatomic, readonly) NSDictionary *inheritedSignals;
@property (nonatomic, readonly) NSDictionary *inheritedMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)propertyForName:(id)arg1;
- (void)addMethod:(id)arg1;
- (void)addProperty:(id)arg1;
- (void)addSignal:(id)arg1;
- (id)initWithName:(id)arg1 superClassName:(id)arg2 initializer:(id)arg3 optional:(_Bool)arg4;
- (_Bool)canMergeFromClassDescriptor:(id)arg1;
- (_Bool)mergeFromClassDescriptor:(id)arg1;
- (void)addChildClass:(id)arg1;

@end
