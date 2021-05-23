/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSData.h>

@interface NSConstantData : NSData

{
    unsigned long long _length;
    const char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (const void *)bytes;
- (_Bool)_isCompact;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)_providesConcreteBacking;
- (id)initWithData:(id)arg1;
- (_Bool)_copyWillRetain;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

@end
