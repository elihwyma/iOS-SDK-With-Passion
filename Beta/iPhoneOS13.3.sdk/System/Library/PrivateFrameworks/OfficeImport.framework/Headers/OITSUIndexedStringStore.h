/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUIndexedStringStore : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForString:(id)arg1;

@end
