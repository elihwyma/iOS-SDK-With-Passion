/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol CABehaviorDelegate;

@interface CABehavior : NSObject

{
    void *_attr;
    unsigned int _refcount;
    unsigned int _uid;
}

@property (getter=isEnabled) _Bool enabled;
@property (copy) NSString *name;
@property (weak) id <CABehaviorDelegate> delegate;
@property (copy) NSDictionary *style;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)behavior;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;

@end
