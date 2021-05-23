/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFHardwareManagerInterface <Swift>

- (unsigned short)expressModesInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForCallbacks: /* Error: Ran out of types for this method. */;
- (unsigned short)isHWSupported: /* Error: Ran out of types for this method. */;
- (unsigned short)controllerInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)rfSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)getDieID: /* Error: Ran out of types for this method. */;
- (unsigned short)getUniqueFDRKeyXPC: /* Error: Ran out of types for this method. */;
- (unsigned short)pushSignedRF:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)areNFFeaturesSupported:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)configureHeadlessFactoryMode:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)headlessFactoryMode: /* Error: Ran out of types for this method. */;
- (unsigned short)disableHeadlessMiniNV: /* Error: Ran out of types for this method. */;
- (unsigned short)getPowerCounters: /* Error: Ran out of types for this method. */;
- (unsigned short)dumpLPMDebugLog: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterForCallbacks: /* Error: Ran out of types for this method. */;
- (unsigned short)setFieldDetectEnabled:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerDelayedWake:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)enableHeadlessTestMode:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)toggleGPIO:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)secureElements: /* Error: Ran out of types for this method. */;
- (unsigned short)getHostCardEmulationLog: /* Error: Ran out of types for this method. */;
- (unsigned short)queueFieldDetectSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueECommercePaymentSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueContactlessPaymentSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueContactlessSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueContactlessUICCSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueSecureElementManagerSession:priority:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueLoyaltyAndPaymentSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueReaderSessionInternal:showUI:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueSeshatSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)preWarm: /* Error: Ran out of types for this method. */;
- (unsigned short)queueTrustSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queuePeerPaymentSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueNdefTagSession:data:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueHostEmulationSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)queueSecureElementAndHostEmulationSession:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)configureReaderModeRFForTransitPartner:transitPartner:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)areSessionsAllowed: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBackgroundTagReading:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)actOnUserInitiatedSystemShutDown:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)setChipscope:callback: /* Error: Ran out of types for this method. */;

@end
