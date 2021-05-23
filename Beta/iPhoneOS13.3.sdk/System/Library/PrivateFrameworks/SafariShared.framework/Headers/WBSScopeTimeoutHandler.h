/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSScopeTimeoutHandler : NSObject

{
    CDUnknownBlockType _handler;
}

- (id)init;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithTimeout:(double)arg1 autoBugCaptureDomain:(id)arg2 detectedProcess:(id)arg3 context:(id)arg4;

@end
