/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation

{
    NSMutableArray *_subpaths;
}

+ (id)directorySubpathsOperationAtPath:(id)arg1;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;

- (void)dealloc;
- (id)subpaths;
- (void)handlePathname:(id)arg1;

@end
