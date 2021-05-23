/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSValue : NSObject <Swift>

@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)valueWithRange:(struct _NSRange)arg1;
+ (id)valueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithRect:(struct CGRect)arg1;
+ (id)valueWithSize:(struct CGSize)arg1;
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;
+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithWeakObject:(id)arg1;
+ (id)valueWithPointer:(const void *)arg1;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (_Bool)isNSValue__;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct _NSRange)rangeValue;
- (struct CGPoint)pointValue;
- (struct CGRect)rectValue;
- (struct CGSize)sizeValue;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2 strict:(_Bool)arg3;
- (_Bool)isEqualToValue:(id)arg1;
- (id)nonretainedObjectValue;
- (id)weakObjectValue;
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (void *)pointerValue;
- (struct NSEdgeInsets)edgeInsetsValue;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;

@end
