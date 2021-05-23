/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, CAValueFunction, NSString;

@interface CAForceField : NSObject

{
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    _Bool _enabled;
}

@property (copy) NSString *name;
@property (getter=isEnabled) _Bool enabled;
@property (retain) CALayer *layer;
@property (retain) CAValueFunction *function;

+ (_Bool)supportsSecureCoding;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)forceField;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
