/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (VoiceServices)

- (unsigned long long)directorySize:(id)arg1;
- (void)removeDirectory:(id)arg1;
- (void)cleanDirectory:(id)arg1 withLRULimit:(unsigned long long)arg2;
- (void)cleanDirectory:(id)arg1 withDateOlderThan:(id)arg2;

@end
