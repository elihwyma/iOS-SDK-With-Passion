//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext;
@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject
{
    id <CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
    CDPContext *_context;
}

@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(NSUInteger)arg2;
- (id)initWithContext:(id)arg1 handler:(id)arg2;

@end

