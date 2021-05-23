/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TVMLKitAdditions)

- (unsigned long long)tv_onDiskSizeOfFileAtPath:(id)arg1 status:(int *)arg2;
- (unsigned long long)tv_onDiskSizeOfDirectoryAtPath:(id)arg1 status:(int *)arg2;

@end
