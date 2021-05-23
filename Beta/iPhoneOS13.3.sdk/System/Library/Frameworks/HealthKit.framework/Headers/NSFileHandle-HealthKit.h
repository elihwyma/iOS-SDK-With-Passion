/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (HealthKit)

- (void)hk_readLinesInFile:(CDUnknownBlockType)arg1;
- (long long)hk_countLines;

@end
