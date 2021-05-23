/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, CAValueFunction, NSString;

@protocol CASpringDelegate;

@interface CASpring : NSObject

{
    NSString *_name;
    CALayer *_layerA;
    CALayer *_layerB;
    struct CGPoint _attachmentPointA;
    struct CGPoint _attachmentPointB;
    CAValueFunction *_function;
    double _stiffness;
    double _damping;
    double _restLength;
    _Bool _enabled;
    id _delegate;
}

@property (copy) NSString *name;
@property (getter=isEnabled) _Bool enabled;
@property (retain) CALayer *layerA;
@property (retain) CALayer *layerB;
@property struct CGPoint attachmentPointA;
@property struct CGPoint attachmentPointB;
@property (retain) CAValueFunction *function;
@property double restLength;
@property double stiffness;
@property double damping;
@property (weak) id <CASpringDelegate> delegate;

+ (_Bool)supportsSecureCoding;
+ (id)spring;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;

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
