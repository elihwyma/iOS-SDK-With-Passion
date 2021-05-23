/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsEvent.h>

@class NSString;

@protocol MTLDevice;

@interface MTLToolsSharedEvent : MTLToolsEvent

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property unsigned long long signaledValue;

- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)newSharedEventHandle;

@end
