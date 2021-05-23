/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject

{
    _Bool _useRouteConfigUpdatedNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedOutputDeviceTranslator;

- (id)init;
- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (void)setOutputDevice:(id)arg1 withOptions:(struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (void)setOutputDevices:(id)arg1 withOptions:(struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addOutputDevice:(id)arg1 withOptions:(struct __CFDictionary *)arg2 toRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeOutputDevice:(id)arg1 withOptions:(const struct __CFDictionary *)arg2 fromRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initForUsingRouteConfigUpdatedNotification:(_Bool)arg1;

@end
