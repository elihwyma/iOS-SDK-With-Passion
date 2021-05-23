/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@protocol SDXPCClientInterface

- (unsigned short)triggerProximityAutoFillDetectedWithURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activateAssertionWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)activityStateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)appleIDInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)broadwayPresentCardWithCode:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)contactIDForEmailHash:phoneHash:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)displayNameForEmailHash:phoneHash:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)displayStringForContactIdentifier:deviceIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)findContact:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDeviceAssets:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPeopleSuggestions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)openSetupURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)preventExitForLocaleReason: /* Error: Ran out of types for this method. */;
- (unsigned short)reenableProxCardType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)repairDevice:flags:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)retriggerProximityPairing: /* Error: Ran out of types for this method. */;
- (unsigned short)retriggerProximitySetup: /* Error: Ran out of types for this method. */;
- (unsigned short)setupDevice:homeIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showDevicePickerWithInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)testContinuityKeyboardBegin: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerHomeKitDeviceDetectedWithURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)wifiPasswordSharingAvailabilityWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)preheatXPCConnection;

@end
