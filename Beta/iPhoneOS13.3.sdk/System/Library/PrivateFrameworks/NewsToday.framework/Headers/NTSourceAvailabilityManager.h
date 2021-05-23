/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@protocol OS_dispatch_queue;

@interface NTSourceAvailabilityManager : NSObject

{
    CDUnknownBlockType _preferredSourceChangedNotificationBlock;
    Class _preferredSourceFetchDescriptorClass;
    NSOrderedSet *_availabilityEntriesInPreferredOrder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder;
@property (nonatomic) Class preferredSourceFetchDescriptorClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType preferredSourceChangedNotificationBlock;

- (id)init;
- (void)_recomputePreferredAvailableTodayResultsSource;
- (void)_setPreferredAvailableTodayResultsSource:(Class)arg1;
- (id)initWithAvailabilityEntriesInPreferredOrder:(id)arg1 queue:(id)arg2;

@end
