/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSMutableData.h>

__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData

{
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator *_bytesDeallocator;
    char *_bytes;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)retainCount;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (const void *)bytes;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (Class)classForCoder;
- (_Bool)_providesConcreteBacking;

@end
