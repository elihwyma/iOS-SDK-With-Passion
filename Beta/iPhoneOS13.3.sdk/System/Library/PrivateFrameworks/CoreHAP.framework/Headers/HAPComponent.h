/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLECentralManagerDelegate;

@interface HAPComponent : HMFObject

{
    id <HAPBTLECentralManagerDelegate> centralManagerDelegate;
}

@property (weak, nonatomic) id <HAPBTLECentralManagerDelegate> centralManagerDelegate;

- (id)initWithDelegate:(id)arg1;

@end
