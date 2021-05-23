/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@interface NRConnectivitySubscriber : NSObject

{
    _Bool _connected;
    unsigned long long _dropoutCounter;
}

@property (nonatomic) _Bool connected;
@property (nonatomic) unsigned long long dropoutCounter;

+ (_Bool)getDropoutCounter:(unsigned long long *)arg1;

- (id)init;
- (void)_readConnectivityStatus;

@end
