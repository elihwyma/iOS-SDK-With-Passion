/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface UINibStringIDTable : NSObject

{
    struct UIStringIDTableBucket **table;
    struct UIStringIDTableBucket *buckets;
    unsigned long long hashMask;
    unsigned long long count;
}

- (void)dealloc;
- (long long)count;
- (_Bool)lookupKey:(id)arg1 identifier:(long long *)arg2;
- (id)initWithKeysTransferingOwnership:(id *)arg1 count:(unsigned long long)arg2;

@end
