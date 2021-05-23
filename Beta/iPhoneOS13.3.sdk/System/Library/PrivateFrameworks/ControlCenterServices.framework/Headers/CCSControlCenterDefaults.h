/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) unsigned long long presentationGesture;
@property (nonatomic) unsigned long long userInvocationCount;
@property (nonatomic) _Bool shouldEnablePrototypeFeatures;
@property (nonatomic) _Bool shouldEnableInternalModules;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (unsigned long long)_defaultPresentationGesture;

@end
