/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAEmitterBehavior : NSObject

{
    unsigned int _type;
    NSString *_name;
    void *_attr;
    void *_cache;
    unsigned int _flags;
}

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) _Bool enabled;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)behaviorTypes;
+ (id)behaviorWithType:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithType:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
