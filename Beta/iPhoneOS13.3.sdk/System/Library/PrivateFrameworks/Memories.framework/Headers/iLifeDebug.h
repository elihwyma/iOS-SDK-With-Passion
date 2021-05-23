/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface iLifeDebug : NSObject

+ (void)loadOnce;
+ (id)debugAssertBehaviorFilePath;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)arg1;
+ (void)removeDebugAssertBehaviorFile;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)arg1;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (void)readDebugAssertBehaviorFromDisk;
+ (_Bool)handledAsDebugAssertBehaviorURL:(id)arg1;
+ (void)drawViewBorder:(id)arg1 withColor:(id)arg2;
+ (void)drawBorder:(struct CGRect)arg1 withColor:(id)arg2;

@end
