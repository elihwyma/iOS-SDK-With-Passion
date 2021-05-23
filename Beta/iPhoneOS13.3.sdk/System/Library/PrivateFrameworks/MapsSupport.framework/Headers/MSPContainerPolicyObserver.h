/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface MSPContainerPolicyObserver : NSObject

{
    unsigned long long _lastKnownItemCount;
    unsigned long long _minimumDeletesForDataLoss;
    double _minimumDeleteRatioForDataLoss;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _Bool _keepMetrics;
    unsigned long long _dataLossPolicyOffenses;
}

@property (nonatomic) _Bool keepMetrics;
@property (nonatomic) unsigned long long dataLossPolicyOffenses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (id)observationQueueForContainer:(id)arg1;
- (void)containerWillEraseContents:(id)arg1;
- (void)setContainerItemCount:(unsigned long long)arg1;

@end
