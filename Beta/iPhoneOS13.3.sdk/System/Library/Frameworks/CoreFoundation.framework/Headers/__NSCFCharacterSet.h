/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)invertedSet;
- (_Bool)longCharacterIsMember:(unsigned int)arg1;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)invert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)bitmapRepresentation;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;

@end
