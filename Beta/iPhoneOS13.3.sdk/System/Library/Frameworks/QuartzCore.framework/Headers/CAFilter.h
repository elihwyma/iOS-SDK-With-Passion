/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAFilter : NSObject

{
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) _Bool enabled;
@property _Bool cachesInputImage;
@property (getter=isAccessibility) _Bool accessibility;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithType:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)filterTypes;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)initWithType:(id)arg1;
- (void)setDefaults;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
