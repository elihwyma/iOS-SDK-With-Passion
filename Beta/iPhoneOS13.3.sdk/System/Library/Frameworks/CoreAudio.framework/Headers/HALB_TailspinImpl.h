/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HALB_TailspinImpl : NSObject

+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)arg1 outDict:(id *)arg2;
+ (_Bool)enableTailspinSync;
+ (_Bool)dumpTailspinSync:(unsigned long long)arg1 forReason:(id)arg2;

@end
