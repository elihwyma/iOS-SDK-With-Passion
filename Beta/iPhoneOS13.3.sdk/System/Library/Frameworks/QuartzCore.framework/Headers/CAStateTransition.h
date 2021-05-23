/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CAStateTransition : NSObject

{
    NSString *_fromState;
    NSString *_toState;
    NSArray *_elements;
}

@property (copy, nonatomic) NSString *fromState;
@property (copy, nonatomic) NSString *toState;
@property (copy, nonatomic) NSArray *elements;

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
