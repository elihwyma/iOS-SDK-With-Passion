/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface TSWPLoadableFonts : NSObject

{
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)backgroundLoadAll;
- (void)loadFontWithName:(id)arg1;
- (void)loadAll;
- (void)p_loadFontWithInfo:(id)arg1;
- (void)pauseBackgroundLoading;
- (void)resumeBackgroundLoading;
- (void)loadFontsForGroup:(id)arg1;
- (void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(_Bool)arg4 backgroundLoad:(_Bool)arg5;
- (void)unregisterFontsForGroup:(id)arg1;

@end
