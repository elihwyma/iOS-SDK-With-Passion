/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

#import <SafariFoundation/Swift-Protocol.h>

@class NSString;

@interface SFCredentialProviderExtensionState : NSObject <Swift>

{
    _Bool _enabled;
    _Bool _supportsIncrementalUpdates;
    NSString *_localizedDisplayName;
    NSString *_containingAppBundleIdentifier;
}

@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) _Bool supportsIncrementalUpdates;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSString *containingAppBundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)credentialProviderExtensionWithDisabledState;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(_Bool)arg1 supportsIncrementalUpdates:(_Bool)arg2;
- (id)initWithEnabledState:(_Bool)arg1 supportsIncrementalUpdates:(_Bool)arg2 localizedDisplayName:(id)arg3 containingAppBundleIdentifier:(id)arg4;

@end
