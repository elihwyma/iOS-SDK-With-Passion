/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject

{
    SUDescriptor *_descriptor;
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUNetworkMonitor *_networkMonitor;
    _Bool _cellularCapable;
}

@property (retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy;
@property (nonatomic, getter=isCellularCapable) _Bool cellularCapable;
@property (retain, nonatomic) SUNetworkMonitor *networkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SUDescriptor *descriptor;

- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;
- (_Bool)isDownloadable;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isDownloadFreeForCellular;
- (_Bool)isPowerRequired;
- (_Bool)isDownloadAllowableForCellular2G;
- (_Bool)isDownloadAllowableForCellularRoaming;
- (_Bool)isDownloadAllowableForWiFi;
- (_Bool)isSamePolicy:(id)arg1;
- (id)_stringForBool:(_Bool)arg1;
- (_Bool)_isCellularCapable;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;
- (_Bool)_isDownloadableForNetworkType:(int)arg1 error:(long long *)arg2 cellularFeesApply:(_Bool *)arg3 powerRequired:(_Bool *)arg4;
- (_Bool)hasEnoughDiskSpace;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;

@end
