/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class RMSPowerAssertion, RMSRunAssertion;

__attribute__((visibility("hidden")))
@interface _RMSSessionRecord : NSObject

{
    int _refreshCount;
    int _timeout;
    id _session;
    RMSPowerAssertion *_powerAssertion;
    RMSRunAssertion *_runAssertion;
}

@property (nonatomic) int refreshCount;
@property (nonatomic) int timeout;
@property (retain, nonatomic) id session;
@property (retain, nonatomic) RMSPowerAssertion *powerAssertion;
@property (retain, nonatomic) RMSRunAssertion *runAssertion;

@end
