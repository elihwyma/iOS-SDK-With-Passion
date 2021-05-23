/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (Rootless)

- (_Bool)makeRootlessDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)convertToRootlessDirectoryAtPath:(id)arg1 error:(id *)arg2;

@end
