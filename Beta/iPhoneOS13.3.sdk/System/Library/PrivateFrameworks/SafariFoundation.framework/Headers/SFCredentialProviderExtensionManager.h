/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSMutableOrderedSet, NSSet;

@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    _Bool _errorEncounteredDuringLastExtensionDiscovery;
    NSSet *_extensionsSync;
}

@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) NSSet *extensionsSync;
@property (nonatomic, readonly) NSExtension *primaryExtension;
@property (nonatomic, readonly) NSExtension *primaryExtensionSync;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)_extensions;
- (_Bool)extensionIsEnabled:(id)arg1;
- (void)setExtension:(id)arg1 isEnabled:(_Bool)arg2;
- (id)displayNameForExtension:(id)arg1;
- (void)getPrimaryExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyObservers:(id)arg1;
- (void)_updateExtensions:(id)arg1;
- (void)_beginExtensionDiscovery;
- (void)_endExtensionDiscovery;
- (_Bool)shouldShowConfigurationUIForEnablingExtension:(id)arg1;

@end
