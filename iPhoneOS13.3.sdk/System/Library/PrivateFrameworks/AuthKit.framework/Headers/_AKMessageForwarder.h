//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAdaptiveServiceInterface-Protocol.h>

@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface>
{
    id _weakReceiver;
    id _strongReceiver;
}

// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)activate;
- (id)initWithStrongReceiver:(id)arg1;
- (id)initWithWeakReceiver:(id)arg1;
- (id)initWithReceiver:(id)arg1 strong:(BOOL)arg2;

@end
