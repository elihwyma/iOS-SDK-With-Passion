/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSColor;

@interface NSShadow : NSObject

{
    unsigned long long _shadowFlags;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (retain, nonatomic) id shadowColor;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)shadow;
+ (id)defaultShadowColor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToGraphicsContext:(id)arg1;
- (id)initWithShadow:(id)arg1;

@end
