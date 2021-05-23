/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class DMFPolicyRegistration, NSArray, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject

{
    NSArray *_policyTypes;
    DMFPolicyRegistration *_registration;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSArray *policyTypes;
@property (nonatomic, readonly) DMFPolicyRegistration *registration;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly, getter=isEnabled) _Bool enabled;

+ (void)createPolicyMonitorWithPolicyChangeHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithPolicyChangeHandler:(CDUnknownBlockType)arg1 addingRegistration:(_Bool)arg2;
- (void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(CDUnknownBlockType)arg2;

@end
