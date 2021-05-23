/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface _DKDeviceActivityStandingQuery : NSObject

{
    NSString *queryIdentifier;
    NSObject<OS_xpc_object> *activity;
}

@property (retain, nonatomic) NSString *queryIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)init;
- (id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2;
- (double)_deviceActivityEphemerality;
- (void)executeWithStorage:(id)arg1 referenceDate:(id)arg2;
- (id)_customIdentifierForDayOfWeek:(long long)arg1;
- (_Bool)_shouldDefer;
- (id)_predicateForDeletedEventsWithReferenceDate:(id)arg1;
- (long long)_computeSlotForDate:(id)arg1;
- (id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3;
- (id)fetchResultForDayOfWeek:(long long)arg1;
- (id)fetchResult;
- (void)executeWithStorage:(id)arg1;
- (id)fetchResultFromStorage:(id)arg1;
- (id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2;

@end
