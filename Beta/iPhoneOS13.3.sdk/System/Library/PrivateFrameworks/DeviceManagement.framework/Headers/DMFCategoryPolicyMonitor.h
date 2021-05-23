/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSArray, NSUUID;

@interface DMFCategoryPolicyMonitor : NSObject

{
    NSArray *_policyTypes;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSArray *policyTypes;
@property (nonatomic, readonly) NSUUID *identifier;

- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;
- (void)requestPoliciesForCategoryIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
