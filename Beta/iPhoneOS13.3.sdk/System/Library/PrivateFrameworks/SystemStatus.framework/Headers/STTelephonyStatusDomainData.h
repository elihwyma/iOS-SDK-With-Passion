/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class NSString, STTelephonyStatusDomainSIMInfo;

@interface STTelephonyStatusDomainData : NSObject <Swift>

{
    STTelephonyStatusDomainSIMInfo *_SIMOneInfo;
    STTelephonyStatusDomainSIMInfo *_SIMTwoInfo;
    _Bool _cellularRadioCapabilityEnabled;
    _Bool _dualSIMEnabled;
    _Bool _radioModuleDead;
}

@property (copy, nonatomic, readonly) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (copy, nonatomic, readonly) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (nonatomic, readonly, getter=isCellularRadioCapabilityEnabled) _Bool cellularRadioCapabilityEnabled;
@property (nonatomic, readonly, getter=isDualSIMEnabled) _Bool dualSIMEnabled;
@property (nonatomic, readonly, getter=isRadioModuleDead) _Bool radioModuleDead;
@property (copy, nonatomic, readonly) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (copy, nonatomic, readonly) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(_Bool)arg3 dualSIMEnabled:(_Bool)arg4 radioModuleDead:(_Bool)arg5;
- (id)_dataPreferredSIMInfoIfSIMPresent;
- (id)_anySIMInfoWithSIMPresent;
- (id)_otherSIMInfoIfSIMPresent:(id)arg1;

@end
