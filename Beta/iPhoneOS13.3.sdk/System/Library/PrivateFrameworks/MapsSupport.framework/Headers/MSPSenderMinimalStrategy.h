/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderMinimalStrategy : MSPSenderStrategy

{
    _Bool _needToSendInit;
}

- (void)addParticipants:(id)arg1;
- (void)etaUpdated:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (_Bool)_validDestinationState:(id)arg1;
- (void)_sendDestinationIfNeeded;
- (_Bool)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;

@end
