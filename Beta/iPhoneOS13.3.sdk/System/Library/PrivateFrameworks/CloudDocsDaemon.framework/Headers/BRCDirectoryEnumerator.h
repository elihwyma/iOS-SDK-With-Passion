/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCDirectoryEnumerator : NSObject

{
    NSMutableArray *_stack;
    _Bool _recursive;
    int *_err;
}

- (id)nextObject;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 error:(int *)arg3;

@end
