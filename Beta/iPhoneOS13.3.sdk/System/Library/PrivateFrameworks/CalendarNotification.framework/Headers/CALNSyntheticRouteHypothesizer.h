/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, NSString;

@interface CALNSyntheticRouteHypothesizer : NSObject

{
    CADRouteHypothesis *currentCADRouteHypothesis;
    CDUnknownBlockType _updateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) EKTravelEngineHypothesis *currentHypothesis;

- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)didPostUINotification:(unsigned long long)arg1;

@end
