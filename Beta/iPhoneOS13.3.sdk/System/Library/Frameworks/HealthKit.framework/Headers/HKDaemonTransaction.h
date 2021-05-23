/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_transaction;

@interface HKDaemonTransaction : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;

+ (id)transactionWithName:(id)arg1;
+ (id)transactionWithOwner:(id)arg1;
+ (id)transactionWithOwner:(id)arg1 activityName:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_initWithName:(id)arg1;

@end
