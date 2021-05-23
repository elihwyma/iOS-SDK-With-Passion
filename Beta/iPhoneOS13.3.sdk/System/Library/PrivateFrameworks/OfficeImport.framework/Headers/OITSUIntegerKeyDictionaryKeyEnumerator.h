/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionaryKeyEnumerator : NSObject

{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (void)dealloc;
- (long long)nextKey;
- (id)initWithIntegerKeyDictionary:(id)arg1;

@end
