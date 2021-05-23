/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, _CPLScheduledOverrideDelegate;

@interface _CPLScheduledOverride : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_storageKey;
    NSDate *_endDate;
    unsigned long long _budget;
    NSObject<OS_dispatch_queue> *_queue;
    id <_CPLScheduledOverrideDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned long long budget;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <_CPLScheduledOverrideDelegate> delegate;
@property (nonatomic, readonly) NSString *status;

+ (unsigned long long)_systemBudgetForBudgetKey:(id)arg1;

- (void)cancel;
- (_Bool)scheduleEndOfOverride;
- (id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2;
- (void)_scheduleEndWithTimeInterval:(double)arg1;
- (_Bool)scheduleEndFromPersistedOverride;

@end
