/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet;

@protocol OS_dispatch_source;

@interface _PASCoalescingTimerGuardedData : NSObject

{
    NSObject<OS_dispatch_source> *coalescingSource;
    unsigned long long currentCoalescingTimerId;
    NSDate *nextCoalescedEventTime;
    NSMutableSet *nonCoalescingSources;
    unsigned long long currentNonCoalescingTimerGeneration;
    id acc;
}

@end
