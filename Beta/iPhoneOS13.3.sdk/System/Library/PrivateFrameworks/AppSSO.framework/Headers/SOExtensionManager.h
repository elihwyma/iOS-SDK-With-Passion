/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSArray, SOExtensionFinder;

@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject

{
    NSArray *_loadedExtensions;
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (nonatomic, readonly) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (_Bool)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)internalExtensionBundleIdentifier;
+ (void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3;
+ (id)internalExtensionsBundleIdentifiers;
+ (_Bool)isInternalExtensionBundleIdentifier:(id)arg1;
+ (_Bool)isAppleConnectExtensionBundleIdentifier:(id)arg1;
+ (_Bool)isTiburonExtensionBundleIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)beginMatchingExtensions;
- (void)loadExtensions;
- (void)endMatchingExtensions;
- (void)unloadExtensions;
- (void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadExtensionWithBundleIdentifier:(id)arg1;
- (void)_doBeginMatchingExtensions;
- (void)_doEndMatchingExtensions;
- (id)_doLoadExtensions;
- (id)loadedExtensionWithBundleIdentifer:(id)arg1;
- (id)loadInternalExtension;
- (id)loadedInternalExtension;
- (_Bool)isLoadedExtensionWithBundleIdentifer:(id)arg1;

@end
