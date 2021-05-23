/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface _AXDyldImageMonitor : NSObject

{
    NSHashTable *_imageMonitorObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addImageMonitorObserver:(id)arg1;
- (void)removeImageMonitorObserver:(id)arg1;
- (id)loadedImagePaths;
- (void)enumerateLoadedImagePaths:(CDUnknownBlockType)arg1;
- (void)_dyldDidAddImage:(id)arg1;

@end
