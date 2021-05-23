/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSCharacterSet.h>

__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet

{
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct {
        unsigned int _inverted:1;
        unsigned int _builtin:1;
        unsigned int _isCF:1;
        unsigned int _reserved:29;
    } _flags;
}

- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)invertedSet;
- (_Bool)longCharacterIsMember:(unsigned int)arg1;
- (_Bool)hasMemberInPlane:(unsigned char)arg1;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (id)bitmapRepresentation;
- (_Bool)characterIsMember:(unsigned short)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)initWithSet:(id)arg1 options:(unsigned long long)arg2;
- (void)_expandInverted;
- (id)replacementObjectForKeyedArchiver:(id)arg1;

@end
