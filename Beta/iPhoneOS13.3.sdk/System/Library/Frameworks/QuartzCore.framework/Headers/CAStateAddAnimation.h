/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAStateElement.h>

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement

{
    NSString *_key;
    CAAnimation *_animation;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) CAAnimation *animation;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (_Bool)matches:(id)arg1;
- (void)apply:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
