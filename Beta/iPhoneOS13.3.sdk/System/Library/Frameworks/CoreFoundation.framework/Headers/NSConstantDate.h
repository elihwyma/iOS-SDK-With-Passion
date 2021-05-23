/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSDate.h>

@interface NSConstantDate : NSDate

{
    double _ti;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (double)timeIntervalSinceReferenceDate;

@end
