/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceRegistrationInterface

- (unsigned short)copyRegistrationStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyRegistrationDisplayStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyServingPlmn:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLastKnownMobileCountryCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyMobileNetworkCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyIsInHomeCountry:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyIsDataAttached:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyOperatorName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLocalizedOperatorName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyRadioAccessTechnology:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyWirelessTechnology:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyAbbreviatedOperatorName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRatSelection:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setRatSelection:selection:preferred:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyBandInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setBandInfo:bands:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSignalStrengthInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceLinkQualityMetric:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getEnhancedVoiceLinkQualityMetric:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyRejectCauseCode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyRegistrationAgentStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getIMSRegistrationStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyRegistrationIMSTransportInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setMaxDataRate:rate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getMaxDataRate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSupportedDataRates:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchNetworkList:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNetworkList:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)automaticallySelectNetwork:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)selectNetwork:network:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNetworkSelection:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isNetworkSelectionMenuAvailable:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNetworkSelectionMode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNetworkSelectionState:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyNetworkSelectionInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isNetworkReselectionNeeded:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getEncryptionStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSignalStrengthMeasurements:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataMode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPublicSignalStrength:completion: /* Error: Ran out of types for this method. */;

@end
