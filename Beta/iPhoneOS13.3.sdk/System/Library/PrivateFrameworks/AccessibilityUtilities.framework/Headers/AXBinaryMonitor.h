/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AXBinaryMonitor : NSObject

{
    NSMutableDictionary *_bundleHandlerMap;
    NSMutableDictionary *_frameworkHandlerMap;
    NSMutableDictionary *_dylibHandlerMap;
    NSMutableDictionary *_appHandlerMap;
    NSMutableDictionary *_appExtensionHandlerMap;
    NSObject<OS_dispatch_queue> *_binaryMonitorQueue;
}

@property (retain, nonatomic) NSMutableDictionary *bundleHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *frameworkHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *dylibHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *appHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)_handleLoadedImagePath:(id)arg1;
- (void)_addHandler:(CDUnknownBlockType)arg1 withName:(id)arg2 toMap:(id *)arg3;
- (id)_bundleNameAndType:(id)arg1;
- (_Bool)_loadImageIsFramework:(id)arg1;
- (id)_frameworkNameForImage:(id)arg1;
- (void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2;
- (_Bool)_loadImageIsBundle:(id)arg1;
- (id)_bundleNameForImage:(id)arg1;
- (_Bool)_loadImageIsDylib:(id)arg1;
- (id)_dylibNameForImage:(id)arg1;
- (_Bool)_loadImageIsAppExtension:(id)arg1;
- (id)_appExtensionNameForImage:(id)arg1;
- (_Bool)_loadImageIsApp:(id)arg1;
- (id)_appNameForImage:(id)arg1;
- (void)evaluateExistingBinaries;
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleName:(id)arg2;
- (void)addHandler:(CDUnknownBlockType)arg1 forFramework:(id)arg2;
- (void)addHandler:(CDUnknownBlockType)arg1 forDylib:(id)arg2;
- (void)addHandler:(CDUnknownBlockType)arg1 forAppExtension:(id)arg2;
- (void)addHandler:(CDUnknownBlockType)arg1 forApp:(id)arg2;

@end
