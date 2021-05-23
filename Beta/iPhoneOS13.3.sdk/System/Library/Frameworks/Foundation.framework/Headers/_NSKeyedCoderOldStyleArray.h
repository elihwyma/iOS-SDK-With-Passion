/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSKeyedCoderOldStyleArray : NSObject

{
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    BOOL _type;
    _Bool _decoded;
    char _padding[2];
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void *)arg3;

@end
