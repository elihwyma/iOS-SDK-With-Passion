/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject

{
    BOOL _propertyType;
    _Bool _readOnly;
    NSSet *_propertyClasses;
    SEL _propertyGetter;
    SEL _propertySetter;
    CDUnknownFunctionPointerType _propertyGetterIMP;
    CDUnknownFunctionPointerType _propertySetterIMP;
    struct objc_ivar *_ivar;
    NSString *_structName;
}

@property (nonatomic) BOOL propertyType;
@property (retain, nonatomic) NSSet *propertyClasses;
@property (nonatomic) SEL propertyGetter;
@property (nonatomic) SEL propertySetter;
@property (nonatomic) CDUnknownFunctionPointerType propertyGetterIMP;
@property (nonatomic) CDUnknownFunctionPointerType propertySetterIMP;
@property (nonatomic) struct objc_ivar *ivar;
@property (nonatomic, getter=isReadOnly) _Bool readOnly;
@property (copy, nonatomic) NSString *structName;

- (void *)ivarAddrForObject:(id)arg1;
- (id)ivarValueForObject:(id)arg1;
- (void)setIvarValue:(id)arg1 forObject:(id)arg2;

@end
