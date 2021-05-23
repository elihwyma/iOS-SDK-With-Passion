/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSEnumerator.h>

@class GSDaemonProxySync, GSPermanentStorage, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface GSPermanentAdditionEnumerator : NSEnumerator

{
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray *_array;
    unsigned long long _pos;
    GSDaemonProxySync *_proxy;
    NSError *_error;
    id _token;
}

@property (nonatomic, readonly) NSError *error;

- (void)dealloc;
- (id)nextObject;
- (void)_fetchNextBatch;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;

@end
