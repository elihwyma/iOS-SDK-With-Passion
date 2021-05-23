/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CAEmitterCell : NSObject

{
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

@property (copy) NSString *particleType;
@property double orientationLatitude;
@property double orientationLongitude;
@property double orientationRange;
@property double rotation;
@property double rotationRange;
@property float mass;
@property float massRange;
@property (copy) NSString *contentsFrameMode;
@property unsigned int contentsFrameCount;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSString *name;
@property (getter=isEnabled) _Bool enabled;
@property float birthRate;
@property float lifetime;
@property float lifetimeRange;
@property double emissionLatitude;
@property double emissionLongitude;
@property double emissionRange;
@property double velocity;
@property double velocityRange;
@property double xAcceleration;
@property double yAcceleration;
@property double zAcceleration;
@property double scale;
@property double scaleRange;
@property double scaleSpeed;
@property double spin;
@property double spinRange;
@property struct CGColor *color;
@property float redRange;
@property float greenRange;
@property float blueRange;
@property float alphaRange;
@property float redSpeed;
@property float greenSpeed;
@property float blueSpeed;
@property float alphaSpeed;
@property (retain) id contents;
@property struct CGRect contentsRect;
@property double contentsScale;
@property (copy) NSString *minificationFilter;
@property (copy) NSString *magnificationFilter;
@property float minificationFilterBias;
@property (copy) NSArray *emitterCells;
@property (copy) NSDictionary *style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property _Bool autoreverses;
@property (copy) NSString *fillMode;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)properties;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)emitterCell;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CA_prepareRenderValue;
- (_Bool)shouldArchiveValueForKey:(id)arg1;

@end
