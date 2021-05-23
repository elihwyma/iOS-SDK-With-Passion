/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy, readonly) NSDictionary *fileAttributes;
@property (copy, readonly) NSDictionary *directoryAttributes;
@property (readonly) _Bool isEnumeratingDirectoryPostOrder;
@property (readonly) unsigned long long level;

- (id)nextObject;
- (void)skipDescendents;
- (void)skipDescendants;

@end
