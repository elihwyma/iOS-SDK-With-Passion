/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@class EKTravelEngineHypothesis;

@protocol CALNRouteHypothesizer <Swift>

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) EKTravelEngineHypothesis *currentHypothesis;
@property (nonatomic, readonly) CDUnknownBlockType updateHandler;

- (unsigned short)startHypothesizingWithUpdateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stopHypothesizing;
- (unsigned short)requestRefresh;
- (unsigned short)didPostUINotification: /* Error: Ran out of types for this method. */;

@end
