/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClientInternal, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BrightnessSystemClientExportedObj : NSObject

{
    CDUnknownBlockType clientBlock;
    NSObject<OS_dispatch_queue> *queue;
    BrightnessSystemClientInternal *_target;
}

@property (nonatomic) BrightnessSystemClientInternal *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)notifyChangedProperty:(id)arg1 value:(id)arg2;
- (void)unregisterNotificationBlock;

@end
