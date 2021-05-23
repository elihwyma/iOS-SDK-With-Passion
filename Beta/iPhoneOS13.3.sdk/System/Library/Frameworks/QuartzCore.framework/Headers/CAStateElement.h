/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject

{
    CALayer *_target;
    CAStateElement *_source;
}

@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAStateElement *source;
@property (copy, nonatomic, readonly) NSString *keyPath;

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matches:(id)arg1;
- (id)save;
- (void)apply:(id)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)targetName;

@end
