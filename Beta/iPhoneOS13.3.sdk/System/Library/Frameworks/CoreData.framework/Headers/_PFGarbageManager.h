/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject

{
    NSMutableDictionary *_storeLinksDirs;
    NSMutableDictionary *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)defaultInstance;

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)_init__;
- (void)_deleteIfNecessary:(id)arg1;
- (void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2;
- (_Bool)registerURLForCleanup:(id)arg1;
- (id)temporaryLinksDirectoryForStore:(id)arg1;
- (void)doCleanupForURL:(id)arg1;

@end
