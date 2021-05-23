/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@protocol HAPStreamDelegate;

@interface HAPRelayStream : HMFObject

{
    id <HAPStreamDelegate> _delegate;
    unsigned long long _mtu;
}

@property (weak) id <HAPStreamDelegate> delegate;
@property (nonatomic, readonly) unsigned long long mtu;

- (void)open;
- (void)close;
- (id)writeData:(id)arg1 error:(id *)arg2;

@end
