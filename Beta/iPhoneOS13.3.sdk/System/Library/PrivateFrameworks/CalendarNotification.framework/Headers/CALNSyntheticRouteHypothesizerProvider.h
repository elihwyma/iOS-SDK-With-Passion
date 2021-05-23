/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CADSyntheticRouteHypothesizerCache, NSString;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject

{
    CADSyntheticRouteHypothesizerCache *_syntheticRouteHypothesizerCache;
}

@property (nonatomic, readonly) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)hypothesizerForPlannedDestination:(id)arg1;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
- (void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)removedRouteHypothesizerForEventExternalURL:(id)arg1;

@end
