/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CATProperty : NSObject

{
    _Bool _readOnly;
    _Bool _nonAtomic;
    _Bool _weakReference;
    NSString *_name;
    NSString *_instanceVariableName;
    long long _type;
    Class _objectClass;
    long long _association;
    SEL _customGetterSelector;
    SEL _customSetterSelector;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *instanceVariableName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly, getter=isReadOnly) _Bool readOnly;
@property (nonatomic, readonly, getter=isNonAtomic) _Bool nonAtomic;
@property (nonatomic, readonly) long long association;
@property (nonatomic, readonly) SEL customGetterSelector;
@property (nonatomic, readonly) SEL customSetterSelector;
@property (nonatomic, readonly, getter=isWeakReference) _Bool weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForProtocol:(id)arg1;

- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;

@end
