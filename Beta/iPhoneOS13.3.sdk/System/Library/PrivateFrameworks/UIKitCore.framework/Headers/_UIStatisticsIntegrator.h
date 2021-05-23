/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIStatisticsIntegrator : NSObject

{
    NSObject<OS_dispatch_queue> *_reportingQueue;
}

+ (id)sharedInstance;
+ (void)createSharedInstanceIfNecessary;
+ (void)setSharedInstance:(id)arg1;

- (id)init;
- (void)setValue:(long long)arg1 forKey:(id)arg2;
- (void)resetDistributionForKey:(id)arg1;
- (void)resetDistributionToValue:(double)arg1 forKey:(id)arg2;
- (void)recordDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2;
- (void)resetValueForKey:(id)arg1;
- (void)incrementValueBy:(long long)arg1 forKey:(id)arg2;
- (void)batchRecord:(CDUnknownBlockType)arg1;

@end
