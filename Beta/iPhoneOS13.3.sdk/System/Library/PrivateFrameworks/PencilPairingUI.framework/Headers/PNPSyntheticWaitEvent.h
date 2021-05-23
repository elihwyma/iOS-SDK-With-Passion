/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <PencilPairingUI/PNPSyntheticPencilEvent.h>

@interface PNPSyntheticWaitEvent : PNPSyntheticPencilEvent

{
    double _delay;
}

- (id)initWithDelay:(double)arg1;
- (void)serviceDestination:(id)arg1 fromSource:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;

@end
