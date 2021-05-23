/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateRemoveElement : CAStateElement

{
    NSString *_keyPath;
    id _object;
}

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id object;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matches:(id)arg1;
- (void)apply:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
