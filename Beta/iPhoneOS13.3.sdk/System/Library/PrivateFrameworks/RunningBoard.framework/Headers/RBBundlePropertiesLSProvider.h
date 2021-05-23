/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString;

@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject

{
    NSCache *_propertiesByIdentity;
    id <RBBundlePropertiesLSProviderDelegate> _delegate;
    struct os_unfair_lock_s _lock;
}

@property (weak, nonatomic) id <RBBundlePropertiesLSProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)propertiesForIdentity:(id)arg1;
- (void)_removeCachedValuesForAppProxies:(id)arg1;

@end
