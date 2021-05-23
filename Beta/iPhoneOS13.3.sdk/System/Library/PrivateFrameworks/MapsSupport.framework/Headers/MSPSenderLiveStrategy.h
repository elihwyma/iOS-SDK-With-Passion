/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderLiveStrategy : MSPSenderStrategy

{
    _Bool _needToSendRoute;
}

- (void)setState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)trafficUpdated:(id)arg1;
- (_Bool)_needToSendEtaRefreshFor:(id)arg1;

@end
