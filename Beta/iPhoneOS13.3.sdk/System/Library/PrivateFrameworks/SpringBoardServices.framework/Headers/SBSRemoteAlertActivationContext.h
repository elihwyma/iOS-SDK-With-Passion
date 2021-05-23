/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, NSUUID, SBSRemoteAlertPresentationTarget;

@interface SBSRemoteAlertActivationContext : NSObject

{
    _Bool _activatingForSiri;
    _Bool _shouldInvalidateWhenDeactivated;
    _Bool _switcherEligible;
    NSString *_reason;
    NSSet *_actions;
    NSDictionary *_userInfo;
    SBSRemoteAlertPresentationTarget *_presentationTarget;
    NSUUID *_activityContinuationIdentifier;
    NSDictionary *_legacyAlertOptions;
}

@property (copy, nonatomic) NSUUID *activityContinuationIdentifier;
@property (copy, nonatomic) NSDictionary *legacyAlertOptions;
@property (nonatomic) _Bool shouldInvalidateWhenDeactivated;
@property (nonatomic, getter=isSwitcherEligible) _Bool switcherEligible;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isActivatingForSiri) _Bool activatingForSiri;
@property (copy, nonatomic) NSSet *actions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3;

@end
