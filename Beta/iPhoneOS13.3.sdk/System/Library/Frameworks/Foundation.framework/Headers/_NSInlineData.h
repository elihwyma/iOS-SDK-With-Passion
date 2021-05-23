/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSInlineData : NSData

{
    unsigned short _length;
}

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;
- (const void *)bytes;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_createDispatchData;
- (id)initWithCoder:(id)arg1;
- (_Bool)_providesConcreteBacking;

@end
