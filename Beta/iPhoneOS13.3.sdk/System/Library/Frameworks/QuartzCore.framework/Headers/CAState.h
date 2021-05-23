/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CAState : NSObject

{
    NSString *_name;
    NSString *_basedOn;
    NSMutableArray *_elements;
    double _nextDelay;
    double _previousDelay;
    _Bool _enabled;
    _Bool _locked;
    _Bool _initial;
}

@property (copy, nonatomic) NSString *name;
@property (copy) NSString *basedOn;
@property (getter=isEnabled) _Bool enabled;
@property (copy, nonatomic) NSArray *elements;
@property double nextDelay;
@property double previousDelay;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (getter=isInitial) _Bool initial;

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addElement:(id)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (void)removeElement:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
