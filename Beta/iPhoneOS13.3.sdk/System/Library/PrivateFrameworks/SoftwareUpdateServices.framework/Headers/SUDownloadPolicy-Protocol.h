/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/Swift-Protocol.h>

@class MISSING_TYPE, SUDescriptor;

@protocol SUDownloadPolicy <Swift>

@property (retain, nonatomic) SUDescriptor *descriptor;

- (MISSING_TYPE *)initWithDescriptor: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isDownloadable;
- (MISSING_TYPE *)isDownloadAllowableForCellular;
- (MISSING_TYPE *)isDownloadFreeForCellular;
- (MISSING_TYPE *)isPowerRequired;
- (MISSING_TYPE *)isDownloadAllowableForCellular2G;
- (MISSING_TYPE *)isDownloadAllowableForCellularRoaming;
- (MISSING_TYPE *)isDownloadAllowableForWiFi;
- (MISSING_TYPE *)isSamePolicy: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)isDownloadableForCurrentNetworkConditions:cellularFeesApply:powerRequired: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)hasEnoughDiskSpace;
- (MISSING_TYPE *)isDownloadableForCurrentNetworkConditions:cellularFeesApply: /* Error: Ran out of types for this method. */;

@end
