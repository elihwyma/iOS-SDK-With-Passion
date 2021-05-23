/*
 Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_extensions;
    NSMutableDictionary *_killTimers;
}

- (id)init;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3;
- (_Bool)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1;
- (void)_killExtensionWithBundleIdentifier:(id)arg1;
- (void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2;

@end
