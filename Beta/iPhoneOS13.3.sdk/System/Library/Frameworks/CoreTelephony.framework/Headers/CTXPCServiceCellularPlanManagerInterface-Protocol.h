/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceCellularPlanManagerInterface

- (unsigned short)supportsPlanProvisioning:carrierDescriptors:smdpUrl:iccidPrefix:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlanWith:appName:appType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getCameraScanInfoForCardData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getTransferPlanListWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getTransferPlansWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)transferPlan:fromDevice:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)transferPlans:fromDevice:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelPlanTransfer:fromDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteTransferPlansForEid:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteZone:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getCurrentIMessageIccidsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)plansPendingInstallWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)installPendingPlan:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isAnyPlanTransferableFromThisDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)bootstrapPlanTransferForEndpoint:usingMessageSession:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isAnyPlanOfTransferCapability:availableForThisDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)endPlanTransferForEndPoint:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRemoteDevicesOfType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getRemoteDeviceOfType:withEID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)transferRemotePlan:fromDevice:completion: /* Error: Ran out of types for this method. */;

@end
