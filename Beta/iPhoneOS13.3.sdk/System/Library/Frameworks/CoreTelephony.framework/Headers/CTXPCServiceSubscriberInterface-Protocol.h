/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceSubscriberInterface

- (unsigned short)getSIMStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSIMTrayStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileEquipmentInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getTypeAllocationCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFirmwareUpdateInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copySIMIdentity:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileSubscriberIdentity:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:isProtectedIdentitySupported:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createEncryptedIdentity:identity:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)evaluateMobileSubscriberIdentity:identity:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileSubscriberCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileSubscriberIsoCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileSubscriberIsoSubregionCode:MNC:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isEsimFor:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getMobileSubscriberHomeCountryList:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLastKnownMobileSubscriberCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileSubscriberNetworkCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyGid1:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyGid2:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSIMLockValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveSIMLockValue:enabled:pin:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unlockPIN:pin:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unlockPUK:puk:newPin:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)promptForSIMUnlock:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)changePIN:oldPin:newPin:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRemainingPINAttemptCount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRemainingPUKAttemptCount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSimLabel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getShortLabel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLabel:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateAuthenticationInfoUsingSim:authParams:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setLabel:label:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setDefaultVoice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setActiveUserDataSelection:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)SIMUnlockProcedureDidComplete;
- (unsigned short)authenticate:request:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserAuthToken:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshUserAuthToken:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserDefaultVoiceSubscriptionContext: /* Error: Ran out of types for this method. */;

@end
