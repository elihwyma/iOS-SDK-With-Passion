/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class _HMContext;

@interface HMSettingsMessageHandler : NSObject

{
    _HMContext *_context;
}

@property (retain) _HMContext *context;

- (void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
