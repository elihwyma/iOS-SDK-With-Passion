/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData

{
    unsigned long long _length;
    void *_bytes;
    CDUnknownBlockType _deallocator;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (const void *)bytes;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)_createDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (_Bool)_providesConcreteBacking;
- (_Bool)_copyWillRetain;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (void)getBytes:(void *)arg1;

@end
