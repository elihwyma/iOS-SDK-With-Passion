/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OITSUSharedLocale : NSObject

{
    struct __CFLocale *mCurrentLocale;
    NSArray *mObserverObjects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_singletonAlloc;
+ (id)sharedLocale;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFLocale *)currentLocale;
- (void)datePreferencesChanged:(id)arg1;

@end
