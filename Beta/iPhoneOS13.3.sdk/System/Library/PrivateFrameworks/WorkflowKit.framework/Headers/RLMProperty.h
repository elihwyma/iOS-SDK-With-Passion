/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RLMProperty : NSObject

{
    int _type;
    struct objc_ivar *_swiftIvar;
    _Bool _indexed;
    _Bool _optional;
    _Bool _array;
    _Bool _isPrimary;
    NSString *_name;
    NSString *_objectClassName;
    NSString *_linkOriginPropertyName;
    NSString *_columnName;
    unsigned long long _index;
    NSString *_getterName;
    NSString *_setterName;
    SEL _getterSel;
    SEL _setterSel;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) _Bool indexed;
@property (nonatomic) _Bool optional;
@property (copy, nonatomic) NSString *objectClassName;
@property (retain, nonatomic) NSString *columnName;
@property (nonatomic) unsigned long long index;
@property (nonatomic) _Bool isPrimary;
@property (nonatomic) struct objc_ivar *swiftIvar;
@property (copy, nonatomic) NSString *getterName;
@property (copy, nonatomic) NSString *setterName;
@property (nonatomic) SEL getterSel;
@property (nonatomic) SEL setterSel;
@property (copy, nonatomic, readonly) NSString *linkOriginPropertyName;
@property (nonatomic, readonly) _Bool array;

+ (id)propertyForObjectStoreProperty:(const struct Property *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(int)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 indexed:(_Bool)arg5 optional:(_Bool)arg6;
- (void)updateAccessors;
- (void)parseObjcProperty:(struct objc_property *)arg1 readOnly:(_Bool *)arg2 computed:(_Bool *)arg3 rawType:(id *)arg4;
- (_Bool)setTypeFromRawType:(id)arg1;
- (_Bool)isEqualToProperty:(id)arg1;
- (id)initSwiftPropertyWithName:(id)arg1 indexed:(_Bool)arg2 linkPropertyDescriptor:(id)arg3 property:(struct objc_property *)arg4 instance:(id)arg5;
- (id)initWithName:(id)arg1 indexed:(_Bool)arg2 linkPropertyDescriptor:(id)arg3 property:(struct objc_property *)arg4;
- (id)initSwiftListPropertyWithName:(id)arg1 instance:(id)arg2;
- (id)initSwiftOptionalPropertyWithName:(id)arg1 indexed:(_Bool)arg2 ivar:(struct objc_ivar *)arg3 propertyType:(int)arg4;
- (id)initSwiftLinkingObjectsPropertyWithName:(id)arg1 ivar:(struct objc_ivar *)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4;
- (id)copyWithNewName:(id)arg1;
- (struct Property)objectStoreCopy:(id)arg1;

@end
