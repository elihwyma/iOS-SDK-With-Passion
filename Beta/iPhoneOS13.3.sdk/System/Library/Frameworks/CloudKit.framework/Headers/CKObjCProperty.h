/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKObjCType, NSMethodSignature, NSString;

@interface CKObjCProperty : NSObject

{
    Class _classHandle;
    CKObjCType *_type;
    NSString *_name;
    unsigned long long _flags;
    SEL _getterSelector;
    NSString *_getterSelectorName;
    NSMethodSignature *_getterMethodSignature;
    SEL _setterSelector;
    NSString *_setterSelectorName;
    NSMethodSignature *_setterMethodSignature;
    NSString *_instanceVariableName;
}

@property (nonatomic, readonly) Class classHandle;
@property (nonatomic, readonly) CKObjCType *type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) SEL getterSelector;
@property (nonatomic, readonly) NSString *getterSelectorName;
@property (nonatomic, readonly) NSMethodSignature *getterMethodSignature;
@property (nonatomic, readonly) SEL setterSelector;
@property (nonatomic, readonly) NSString *setterSelectorName;
@property (nonatomic, readonly) NSMethodSignature *setterMethodSignature;
@property (nonatomic, readonly) NSString *instanceVariableName;

- (id)description;
- (long long)compare:(id)arg1;
- (id)getFromObject:(id)arg1;
- (id)initWithClass:(Class)arg1 property:(struct objc_property *)arg2;
- (long long)compareToProperty:(id)arg1;
- (void)setValue:(id)arg1 onObject:(id)arg2;

@end
