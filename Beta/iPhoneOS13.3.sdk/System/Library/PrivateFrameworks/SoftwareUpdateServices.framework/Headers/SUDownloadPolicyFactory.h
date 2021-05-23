/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@interface SUDownloadPolicyFactory : NSObject

+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(_Bool)arg4;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(_Bool)arg4;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(_Bool)arg3;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;

@end
