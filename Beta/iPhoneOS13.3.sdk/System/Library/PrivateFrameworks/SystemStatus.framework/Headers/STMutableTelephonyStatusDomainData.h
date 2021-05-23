/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <SystemStatus/STTelephonyStatusDomainData.h>

@class NSString, STTelephonyStatusDomainSIMInfo;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData

@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (nonatomic, getter=isCellularRadioCapabilityEnabled) _Bool cellularRadioCapabilityEnabled;
@property (nonatomic, getter=isDualSIMEnabled) _Bool dualSIMEnabled;
@property (nonatomic, getter=isRadioModuleDead) _Bool radioModuleDead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSIMOneInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSIMTwoInfoWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)applyDiff:(id)arg1;

@end
