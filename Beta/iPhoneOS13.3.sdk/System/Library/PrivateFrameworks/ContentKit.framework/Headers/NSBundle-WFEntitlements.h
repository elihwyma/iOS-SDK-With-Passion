/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSBundle.h>

@class NSArray, NSDictionary, NSString;

@interface NSBundle (WFEntitlements)

@property (nonatomic, readonly, getter=wf_entitlements) NSDictionary *entitlements;
@property (nonatomic, readonly, getter=wf_teamIdentifier) NSString *teamIdentifier;
@property (nonatomic, readonly, getter=wf_apsEnvironment) NSString *apsEnvironment;
@property (nonatomic, readonly, getter=wf_applicationGroups) NSArray *applicationGroups;
@property (nonatomic, readonly, getter=wf_keychainAccessGroups) NSArray *keychainAccessGroups;

@end
