/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface _REEngineDefaults : NSObject

{
    NSString *_domain;
    NSUserDefaults *_defaults;
    NSMutableSet *_registeredPaths;
    NSMutableDictionary *_registeredBlocks;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)defaultsForEngine:(id)arg1;
+ (id)globalDefaults;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_domainName;
- (id)initWithDomain:(id)arg1;
- (_Bool)_BOOLValueForKey:(id)arg1 set:(_Bool *)arg2;
- (long long)_NSIntegerValueForKey:(id)arg1 set:(_Bool *)arg2;
- (id)_idValueForKey:(id)arg1 set:(_Bool *)arg2;
- (void)_registerCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;

@end
