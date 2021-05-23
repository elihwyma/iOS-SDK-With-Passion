/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class MPAVRoutingController, NACRunAssertion;

__attribute__((visibility("hidden")))
@interface _NACRoutesObserverRecord : NSObject

{
    MPAVRoutingController *_routingController;
    NACRunAssertion *_runAssertion;
}

@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) NACRunAssertion *runAssertion;

@end
