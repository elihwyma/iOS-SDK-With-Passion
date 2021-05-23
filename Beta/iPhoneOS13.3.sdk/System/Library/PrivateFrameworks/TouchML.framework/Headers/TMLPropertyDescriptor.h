/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLPropertyDescriptor : NSObject

{
    NSString *_propertyName;
    NSString *_propertyType;
    _Bool _readonly;
    _Bool _optional;
    unsigned long long _type;
}

@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *typeClassName;
@property (nonatomic, readonly, getter=isReadonly) _Bool readonly;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithName:(id)arg1 typeName:(id)arg2 attributes:(id)arg3;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 attributes:(id)arg3;
- (_Bool)canMergeFromPropertyDescriptor:(id)arg1;

@end
