/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CallDBProperties : NSManagedObject

@property (retain, nonatomic) NSNumber *timer_outgoing;
@property (retain, nonatomic) NSNumber *timer_incoming;
@property (retain, nonatomic) NSNumber *timer_all;
@property (retain, nonatomic) NSNumber *timer_lifetime;
@property (retain, nonatomic) NSNumber *timer_last;

@end
