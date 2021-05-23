/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NSEnergyFormatter : NSFormatter <Swift>

{
    void *_formatter;
    _Bool _isForFoodEnergyUse;
    void *_reserved[2];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;
@property (getter=isForFoodEnergyUse) _Bool forFoodEnergyUse;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (void)receiveObservedValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromJoules:(double)arg1;
- (id)stringFromJoules:(double)arg1;
- (id)unitStringFromJoules:(double)arg1 usedUnit:(long long *)arg2;

@end
