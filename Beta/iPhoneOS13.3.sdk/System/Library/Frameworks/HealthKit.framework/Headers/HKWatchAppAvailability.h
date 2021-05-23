/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class ASDAppQuery, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HKWatchAppAvailability : NSObject

{
    NSString *_bundleID;
    ASDAppQuery *_query;
    NSArray *__test_apps;
}

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) ASDAppQuery *query;
@property (retain, nonatomic) NSArray *_test_apps;

- (id)initWithBundleID:(id)arg1;
- (id)findApplicationIn:(id)arg1;
- (void)appInstallStateOnWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
