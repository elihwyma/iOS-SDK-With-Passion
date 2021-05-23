/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, CAStateControllerTransition, NSString;

@protocol CAAnimationDelegate;

@interface CAAnimation : NSObject

{
    void *_attr;
    unsigned int _flags;
}

@property (weak) CAStateControllerTransition *CAStateControllerTransition;
@property (getter=isEnabled) _Bool enabled;
@property (copy) NSString *beginTimeMode;
@property double frameInterval;
@property long long preferredFramesPerSecond;
@property _Bool discretizesTime;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (retain) id <CAAnimationDelegate> delegate;
@property (getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property _Bool autoreverses;
@property (copy) NSString *fillMode;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)properties;
+ (id)animation;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (_Bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (void)setDefaultDuration:(double)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (_Bool)removedOnCompletion;

@end
