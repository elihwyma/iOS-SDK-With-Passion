/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSZeroData : NSData

+ (id)data;

- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)retain;
- (oneway void)release;
- (const void *)bytes;
- (_Bool)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_providesConcreteBacking;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)_dispatchData;

@end
