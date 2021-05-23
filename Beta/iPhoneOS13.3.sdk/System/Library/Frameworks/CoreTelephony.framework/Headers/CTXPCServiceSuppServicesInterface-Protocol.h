/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceSuppServicesInterface

- (unsigned short)fetchCallWaitingValue:callClass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCallWaitingValue:callClass:enabled:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallForwardingValue:reason:callClass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCallForwardingValue:value:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isUnconditionalCallForwardingActive:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallBarringValue:facility:callClass:password:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCallBarringValue:facility:callClass:enabled:password:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConnectedLinePresentationValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallingLinePresentationValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConnectedLineIdRestrictionValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallingLineIdRestrictionValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCallingLineIdRestrictionValue:restrictionValue:completion: /* Error: Ran out of types for this method. */;

@end
