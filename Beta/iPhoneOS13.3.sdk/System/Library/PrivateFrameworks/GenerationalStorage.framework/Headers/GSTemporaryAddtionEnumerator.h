/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSEnumerator.h>

@class GSTemporaryStorage, NSArray, NSDirectoryEnumerator, NSError, NSString;

__attribute__((visibility("hidden")))
@interface GSTemporaryAddtionEnumerator : NSEnumerator

{
    GSTemporaryStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOption;
    NSError *_error;
    NSDirectoryEnumerator *_enumerator;
    NSArray *_array;
    unsigned long long _pos;
}

@property (nonatomic, readonly) NSError *error;

- (id)nextObject;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (id)_nextURL;

@end
