/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject

{
    CALayer *_target;
    CAAnimation *_animation;
    NSString *_key;
    _Bool _enabled;
}

@property (getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAAnimation *animation;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
