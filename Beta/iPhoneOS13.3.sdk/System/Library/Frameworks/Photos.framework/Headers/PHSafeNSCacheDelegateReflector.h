/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMapTable *_delegegatesByCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setDelegate:(id)arg1 forCache:(id)arg2;
+ (void)removeDelegateForCache:(id)arg1;

- (id)init;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)setDelegate:(id)arg1 forCache:(id)arg2;
- (void)removeDelegateForCache:(id)arg1;

@end
