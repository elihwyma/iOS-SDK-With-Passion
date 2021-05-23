/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKPPTPluginManager : NSObject

{
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (id)init;
- (void)_loadPPTBundles;
- (void)registerDriverClass:(Class)arg1;
- (id)builtinTests;
- (Class)classForTestType:(id)arg1;

@end
