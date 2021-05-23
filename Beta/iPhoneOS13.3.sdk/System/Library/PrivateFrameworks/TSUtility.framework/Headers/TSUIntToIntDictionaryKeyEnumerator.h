/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSUIntToIntDictionaryKeyEnumerator : NSObject

{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void)dealloc;
- (long long)nextKey;
- (id)initWithIntegerKeyDictionary:(id)arg1;

@end
