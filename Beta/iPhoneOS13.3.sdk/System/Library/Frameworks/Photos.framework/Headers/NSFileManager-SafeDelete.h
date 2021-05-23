/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafeDelete)

- (id)removeItemAtPath:(id)arg1 type:(unsigned long long)arg2 recursive:(_Bool)arg3;

@end
