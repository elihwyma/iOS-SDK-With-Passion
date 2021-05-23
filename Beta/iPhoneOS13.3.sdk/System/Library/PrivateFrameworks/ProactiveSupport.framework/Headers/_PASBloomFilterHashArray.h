/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASBloomFilterHashArray : NSObject

{
    unsigned long long _size;
    int *_data;
}

@property (nonatomic, readonly) int *hashes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initInternal;

@end
