/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class CDPContext;

@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject

{
    id <CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
    CDPContext *_context;
}

@property (nonatomic, readonly) CDPContext *context;

- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 handler:(id)arg2;

@end
