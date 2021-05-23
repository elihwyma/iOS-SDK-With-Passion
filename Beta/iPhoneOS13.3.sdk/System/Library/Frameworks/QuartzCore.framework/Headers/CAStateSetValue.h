/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement

{
    NSString *_keyPath;
    id _value;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id value;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matches:(id)arg1;
- (void)apply:(id)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
